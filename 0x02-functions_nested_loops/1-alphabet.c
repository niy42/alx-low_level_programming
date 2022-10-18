#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char y;

	{
		for (y = 'a'; y <= 'z'; y++)
			{
				_putchar(y);
			}
		_putchar('\n');
	}
}
