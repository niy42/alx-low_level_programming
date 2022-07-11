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

	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
