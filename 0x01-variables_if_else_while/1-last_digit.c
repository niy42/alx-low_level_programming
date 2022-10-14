/*
 * File: 1-last_digit.c
 *
 * Author: Obanla Adeniyi
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints last digit of a number and states
 *	 whether greater than 5, equal to 0, 0r less than 6 and not zero
 *
 * Return: Always 0.
 */
int main(void)
{
	int Num;

	srand(time(0));
	Num = rand() - RAND_MAX / 2;
	if ((Num % 10) > 5)
		printf("Last digit is %d and is greater than 5 \n", (Num % 10));
	else if ((Num % 10) < 6 && (Num % 10) != 0)
		printf("The last digit is %d is less than 6 and not 0 \n", (Num % 10));
	else
		printf("%d is the last digit and is 0 \n", (Num % 10));
	return (0);
}
