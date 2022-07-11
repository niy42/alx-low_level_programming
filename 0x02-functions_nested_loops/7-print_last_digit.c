#include "main.h"

/**
*print_last_digit - prints last "digit"
*@c: argument to be passed and displayed
*
*Return: value of last digit
*/
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (c < 0)
		c *= -1;
	else
		_putchar(last_digit + '0');
	return (last_digit);
}
