/**
 * main - a program that prints the
 *	  alphabet in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
