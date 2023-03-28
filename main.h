#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct print - a new typedef define a struct print
 * @fun: argument for the function
 * @print: a type of argument
 */
typedef struct printf
{
		char e;
int (*funtion)(va_list arg);
}print_f;

int _printf(const char *format, ...);
int _putchar(char c);
int _process_format(char format, va_list argument);


#endif
