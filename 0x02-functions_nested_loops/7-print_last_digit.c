#include "main.h"

/**
 * print_last_digit - prints last "digit"
 * @c: argument to be passed and displayed
 *
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = -1 * (c % 10);
	else
		c = c % 10;
	_putchar(c + '0');
	return (c);
}
