#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - print function
 * @format: str
 * Return: integer
 */

char *helper_func(char *buff)
{
	char *tmp = buff;
	int count = 0;

	while (*tmp != '\0')
	{
		if ((*tmp > 0 && *tmp < 32) || *tmp >= 127)
		{
			count = count + 3;
		}
		count++;
		tmp++;
	}

	char *new_s = malloc(count + 1);
	char *returned_new = new_s;

	tmp = buff;

	char *hex_chars = "0123456789ABCDEF";

	while (*tmp != '\0')
	{
		if ((*tmp > 0 && *tmp < 32) || *tmp >= 127)
		{
			*new_s = '\\';
			*(new_s + 1) = 'x';

			*(new_s + 2) = hex_chars[(*tmp >> 4) & 0x0f];
			*(new_s + 3) = hex_chars[*tmp & 0x0f];
			new_s += 3;
		}
		else
		{
			*new_s = *tmp;
		}

		new_s++;
		tmp++;
	}
	*new_s = '\0';
	return returned_new;
}

int _printf(const char *format, ...)
{
	char *buff;
	int i = 0, count = 0;
	va_list arg_value;
	int (*func)(char *, int, va_list);

	buff = malloc(4000);
	if ((!format || !buff) || (format[0] == '%' && format[1] == '\0'))
	{
		free(buff);
		exit(1);
	}

	va_start(arg_value, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			buff[count] = format[i];
			count++;
		}
		else
		{
			func = check_prtr(format[i + 1]);
			if (!func)
			{
				buff[count] = '%';
				i++;
				count++;
				continue;
			}
			count = func(&buff[count], count, arg_value);
			i++;
		}
		i++;
	}

	char *buff_n = helper_func(buff);
	write(1, buff_n, count);
	va_end(arg_value);
	free(buff_n);
	return (count);
}
