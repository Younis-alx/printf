#include "main.h"

/**
 * func_d - add a value to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_d(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_i - add a integer to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_i(char *buff, int count, va_list value)
{
	int base = 10;
	char *str = _itoa(va_arg(value, int), base);

	return (_assign(buff, count, str));
}

/**
 * func_u - add a unsigned integer to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_u(char *buff, int count, va_list value)
{
	int base = 10;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

/**
 * func_o - add a octal to buff
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int func_o(char *buff, int count, va_list value)
{
	int base = 8;
	unsigned int integer;
	char *str;

	integer = va_arg(value, unsigned int);
	str = _utoa(integer, base);

	return (_assign(buff, count, str));
}

