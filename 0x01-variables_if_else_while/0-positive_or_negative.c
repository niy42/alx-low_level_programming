/*
 * File: 0-positive_or_negative.c
 *
 * Author: Obanla Adeniyi
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero"
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int Num;

	srand(time(0));
	Num = rand() - RAND_MAX / 2;

	if (Num > 0)
		printf("%d is positive\n", Num);
	else if (Num < 0)
		printf("%d is negative\n", Num);
	else
		printf("%d is zero\n", Num);
	return (0);
}
