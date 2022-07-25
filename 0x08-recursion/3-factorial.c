#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number to factorial
 *
 * Return: the factorial and -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
