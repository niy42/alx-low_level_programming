#include "main.h"

/**
*print_last_digit - prints last "digit"
*@c: argument to be passed and displayed
*
*Return: value of last digit
*/
int print_last_digit(int c)
{
	_putchar((c % 10) + '0');
	return (c);
}
