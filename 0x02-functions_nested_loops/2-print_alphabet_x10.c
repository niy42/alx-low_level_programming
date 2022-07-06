#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet_x10 - entry point
 *
 * Description: 'a program to print lowercase alphabets'
 *
 * Return: Always
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)

			putchar(letter);

		putchar('\n');
	}

}
