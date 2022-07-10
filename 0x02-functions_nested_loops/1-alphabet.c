#include "main.h"

/**
*print_alphabet - prints letters in lowercase.
*Return: nothing
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
