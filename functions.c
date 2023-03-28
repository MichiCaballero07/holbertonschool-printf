#include "main.h"
#include <unistd.h>

/**
 * print_c - function
 * description - print a character
 * @arg: argument for the function
 *
 * Return: char
 */
int print_char(va_list arg)
{
	char i = va_arg(arg, int);

	_putchar(i);

	return (1);
}
/**
 * print_i - function
 * description - print i and d
 * @arg: argument for the function
 * Return: int
 */
int print_int(va_list arg)
{
	unsigned int n;
	int i, d, l;

	i = va_arg(arg, int);
	d = 1;
	l = 0;

	if (i < 0)
	{
		l = l + _putchar('-');
		n = i * -1;
	}
	else
	{
		n = i;
	}
	while (n / d > 9)

		d = d * 10;

	while (d != 0)
	{
		l = l + _putchar('0' + n / d);

		n = n % d;
		d = d / 10;
	}
	return (l);
}
/**
 * print_s - function
 * description - print a string
 * @arg: argument for the function
 * Return: string
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)

		s = "(null)";

	for (; s[i]; i++)

		_putchar(s[i]);

	return (i);
}
/**
 * _putchar - function
 * @c: argument for the function
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
