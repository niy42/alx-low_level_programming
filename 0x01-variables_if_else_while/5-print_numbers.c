#include <stdlib.h>
#include <time.h>

/* 4-print_alphabet.c */

#include <stdio.h>

/* a program that prints all single numbers of base 10 */

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'a program that prints all single numbers of base 10'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);

}

