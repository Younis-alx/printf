#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - a function that prints char, str, int and decimal fmt
 * @format: user input format string, with/without format specifier.
 *
 * Return: void
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int index;
	int return_val;
	int (*p)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	return_val = 0;
	va_start(ap, format);
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			return_val = return_val + 1;
			_putchar(format[index]);
		}
		else
		{
			p = get_func(format[index + 1]);
			if (p == NULL)
			{
				_putchar(format[index]);
				return_val = return_val + 1;
			}
			else
			{
				return_val = return_val + p(ap);
				index = index + 1;
			}
		}
		index = index + 1;
	}
	va_end(ap);
	return (return_val);
}
