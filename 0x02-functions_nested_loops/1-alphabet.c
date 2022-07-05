#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
 */

int main(void)
{
    print_alphabet();

    return 0;
}
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')

		_putchar(i++);

	_putchar('\n');
}
