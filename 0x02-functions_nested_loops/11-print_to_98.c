#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: numbers to be printed
 *
 * Return: count to 98
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}
}
