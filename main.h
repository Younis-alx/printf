#ifndef __MAIN_H__
#define __MAIN_H__
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


/* Declaration of typedef structs: */


/**
* struct format_specs - format specifiers and connected function
*
* @c: such as those found in format string
* @f: The function associated
*/


typedef struct ptr
{
char *c;
int (*f)(char *, int, va_list);
} ptr_ch;





int _printf(const char *format, ...);
int (*check_prtr(char specifier))(char *, int, va_list);


int func_d(char *buff, int count, va_list value);
int func_i(char *buff, int count, va_list value);
int func_u(char *buff, int count, va_list value);
int func_o(char *buff, int count, va_list value);
int func_x(char *buff, int count, va_list value);
int func_X(char *buff, int count, va_list value);
int func_c(char *buff, int count, va_list value);
int func_s(char *buff, int count, va_list value);
int func_ptg(char *buff, int count, va_list value);
int func_b(char *buff, int count, va_list value);
int func_r(char *buff, int count, va_list value);
int func_R(char *buff, int count, va_list value);
int func_p(char *buff, int count, va_list value);


int _assign(char *buff, int count, char *value);
int _rev_assign(char *buff, int count, char *value);


int _strlen(char *s);
char *_reverse(char *s, int n);
char *_rot13(char *str);
void _strcpy(char *dest, char *src);
void _rev_ptr(char *str);


int _abs(int n);
char *_itoa(int value, int base);
char *_utoa(unsigned int value, unsigned int base);
char *_lcutoa(unsigned int value, unsigned int base);
 #endif /* __MAIN_H__ */

