#include "main.h"

/**
 * _printf - function
 * description - function that produces an output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	const char *p;
	int n = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (p = format; *p; p++)
	{
		if (*p == '%')
			witch(++p, arg, &n);
		else
			_putchar(*p), n++;
	}
	va_end(arg);
	return (n);
}

/**
 * witch - Funtion
 *
 * @p: Pointer to a string(format)
 * @arg: variadic list
 * @n: counter
 */
int witch(const char *p, va_list arg, int *n)
{
	switch (*p)
	{
		case 's':
			*n += print_string(arg);
			break;
		case 'c':
			*n += print_char(arg);
			break;
		case '%':
			_putchar('%'), *n += 1;
			break;
		case '\0':
			return (-1);
		case 'i':
		case 'd':
			*n += print_int(arg);
			break;
		default:
			_putchar('%'), _putchar(*p), *n += 2;
	}
	return (0);
}
