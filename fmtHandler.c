#include "main.h"

/**
* fmt_handler - handles format specifier given by printf and
* fills the buffer with string + correct format
* @k: count of char
* @arr: buffer param
* @c: indexed format specifier
* @v1: params after const char fomrat
*/

void fmt_handler(int *k, char arr[], char c, va_list v1)
{
char *str;
switch (c)
{
case 'c':
{
arr[*k] = va_arg(v1, int);
++*k;
break;
}
case 's':
{
str = va_arg(v1, char *);
_strcpy(&arr[*k], str);
*k += _strlen(str);
break;
}
case '%':
{
arr[*k] = '%';
++*k;
break;
}
case 'i':
{
num_handler(arr, k, v1);
break;
}
case 'd':
{
num_handler(arr, k, v1);
break;
}
default:
{
arr[*k] = '%';
arr[++*k] = c;
++*k;
}
}
}
