#include <stdlib.h>
#include <time.h>

/* 4-print_alphabet.c */

#include <stdio.h>

/*  a program that prints the alphabet in lowercase except e and q */

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'a program that prints the alphabet in lowercase e and q'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	putchar('\n');

	return (0);

}
