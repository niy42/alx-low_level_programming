#include <stdlib.h>
#include <time.h>
 #include <stdio.h>
/* 6-print_numberz.c*/
/*a program that prints all single digit numbers of base 10 starting from 0*/
/**
 * main - Entry point
 * Author: Obanla Adeniyi
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
