#include <stdlib.h>
#include <time.h>

/* 0-positive_or_negative.c */

#include <stdio.h>

/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'detects and prints the value of a random number'
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);

	else if (n < 0)
	printf("%d is negative\n", n);

	else
	printf("%d is zero\n", n);

	return (0);

}

