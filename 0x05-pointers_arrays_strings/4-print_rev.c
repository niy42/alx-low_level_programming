#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0, i;

	while (s[i++])
		c++;
	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
