#include "main.h"

/**
*swap_int - swaps value of two integers
*@a: first integer to be swapped
*@b: second integer to be swapped
*/
void swap_int(int *a, int *b)
{
	int trx = *a;
	*a = *b;
	*b = trx;
}
