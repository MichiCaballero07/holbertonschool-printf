#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);
void witch(const char *p, va_list arg, int *n);
int print_unsigned_int(va_list arg);

#endif
