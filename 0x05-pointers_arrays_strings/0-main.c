#include "main.h"
#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
