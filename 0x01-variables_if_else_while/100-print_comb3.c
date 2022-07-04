/*
 * File: 10-print_comb2.c
 * Auth: Obanla Adeniyi
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	return (0);
}
