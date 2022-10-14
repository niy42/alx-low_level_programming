#include <stdlib.h>
#include <time.h>

/* 7-print_tebahpla.c */

#include <stdio.h>

/* a program that all the numbers of base 16 in lowercase */

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	for (alpha = 'a'; alpha < 'g'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
