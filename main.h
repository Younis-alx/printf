#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
/* Declaration of typedef structs: */

/**
 * struct format_specs - format specifiers and connected function
 *
 * @specifier: such as those found in format string
 * @f: The function associated
 */

typedef struct format_specs
{
	char specifier;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_decimal(va_list ap);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int (*get_func(char s))(va_list);
int print_percent(__attribute__((unused))va_list ap);
int put_count(char c);
#endif /* __MAIN_H__ */
