#include "main.h"
/**
* _itoa - Converts an integer value to a null-terminated string
* using the specified base and stores the result
* int the array given by strout param
*@i: value
*@strout: string
*@base: base to convert with
*Return: strout
*/
char *_itoa(int i, char *strout, int base)
{
char *format = strout;
int digit, sign = 0;
if (i < 0)
{
sign = 1;
i *= -1;
}
while (i)
{
digit = i % base;
*format = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
i = i / base;
format++;
}
if (sign)
{
*format++ = '-';
}
*format = '\0';
_strrev(strout);
return (strout);
}
