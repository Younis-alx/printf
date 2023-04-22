#include "main.h"
/**
* _printf - print string to stdout
* @format: char string to output
* Return: count of char printed
*/
int _printf(const char *format, ...)
{
va_list v1;
int i = 0, k = 0;
char buff[100] = {0};
char *str;
va_start(v1, format);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
{
buff[k] = va_arg(v1, int);
k++;
break;
}
case 's':
{
str = va_arg(v1, char *);
_strcpy(&buff[k], str);
k += _strlen(str);
break;
}
case '%':
{
buff[k] = '%';
k++;
}
}
}
else
{
buff[k] = format[i];
k++;
}
i++;
}
write(1, &buff, k + 1);
va_end(v1);
return (k);
}
