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
int *kr = &k;
char buff[BUFFSIZE];
va_start(v1, format);
for (i = 0; format != NULL && format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
fmt_handler(kr, buff, format[i], v1);
}
else
{
buff[k] = format[i];
k++;
}
}
write(1, &buff, k);
va_end(v1);
return (k);
}
