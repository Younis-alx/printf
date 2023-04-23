#include "main.h"

/**
* num_handler - fills the buffer with right number format
* @arr: buffer to fill
* @k: pointer to count of char
* @v1: variadic params
*/
void num_handler(char arr[], int *k, va_list v1)
{
char tmp[20];
int num;
num = va_arg(v1, int);
if (!num)
num = 0;
_itoa(num, tmp, 10);
_strcpy(&arr[*k], tmp);
*k += _strlen(tmp);
}
