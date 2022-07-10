#include "main.h"

/**
*print_alphabet_x10 - prints alphabet in lowercase 10 times
*
*Return: nothing
*/
void print_alphabet_x10(void)
{
	int count;
	char y;

	for (count = 0; count <= 9; count++)
		{
			for (y = 'a'; y <= 'z'; y++)
			{
				_putchar(y);
			}
			_putchar('\n');
		}
}
