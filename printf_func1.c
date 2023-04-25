#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * func_x - add a unsigned hexadecimal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_x(char *buff, int count, va_list value)
{
	int base = 16;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _lcutoa(integer, base);

	return (_assign(buff, count, str));
}
/**
* func_p - add a converted pointer string (lower case) to buff
*@buff: str var
* @count: index counter
* @value: value in the index
* Return: int
*/

int func_p(char *buff, int count, va_list value)
{
int base = 16;
char *str;
unsigned int num_addr;
void *addr = va_arg(value, void *);

	if (addr == NULL)
		return (write(1, "(nil)", 5));

num_addr = (unsigned long)addr;

str = _lcutoa(num_addr, base);

	return (_assign(buff, count, str));
}

/**
 * func_X - add a unsigned hexadecimal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_X(char *buff, int count, va_list value)
{
	int base = 16;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_c - add a character to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_c(char *buff, int count, va_list value)
{
	int ch = va_arg(value, int);

	if (!ch)
	{
		write(1, "\0\0", 2);
		free(buff);
		exit(0);
	}
	buff[0] = ch;
	return (count + 1);
}

