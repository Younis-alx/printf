#include "main.h"

/**
* _strrev - function is used to reverse the given string.
* @format: string to rev
* Return: string after reverse
*/

char *_strrev(char *format)
{
int i;
int len = 0;
char c;
if (!format)
return (NULL);
while (format[len] != '\0')
{
len++;
}
for (i = 0; i < (len / 2); i++)
{
c = format[i];
format [i] = format[len - i - 1];
format[len - i - 1] = c;
}
return (format);
}
