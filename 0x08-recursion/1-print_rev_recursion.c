#include "main.h"
/**
*_print_rev_recursion - prints the string in reverse
*@s: argument to be passed
*
*Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
