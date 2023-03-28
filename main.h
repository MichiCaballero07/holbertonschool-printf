#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* helper functions */
int _putchar(char c);
/* functions to print */
int _printf(const char *format, ...);
int print_s(va_list arg);
int print_c(va_list arg);
int print_i(va_list arg);

#endif
