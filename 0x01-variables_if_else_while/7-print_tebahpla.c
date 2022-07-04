#include <stdlib.h>
#include <time.h>

/* 7-print_tebahpla.c */

#include <stdio.h>

/* a program that prints alphabets in reverse */

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'prints alphabets in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
	putchar('\n');

	return (0);
}
