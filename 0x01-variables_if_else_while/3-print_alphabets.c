#include <stdlib.h>
#include <time.h>

/* 2-print alphabet.c */

#include <stdio.h>

/*a program that prints the alphabet in lowercase, then uppercase*/

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'a program that prints the alphabet in lower then uppercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);

}

