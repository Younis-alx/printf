#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _putchar(char c);
void fmt_handler(int *k, char arr[], char c, va_list v1);
char * _itoa(int i, char *strout, int base);
char *_strrev (char *format);
void num_handler(char arr[], int *k, va_list v1);
#define BUFFSIZE 1024
#endif
