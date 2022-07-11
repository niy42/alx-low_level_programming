#include "main.h"

/**
*print_sign - writes sign of a number
*@n: arguments to be passed
*
*Return: 1 and prints "+" if n > 0
*else otherwise: 0 and prints "0" if n = 0
*else: -1 and prints "_" if n < 0
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if	(n < 0)
		return (-1);
	else
		return (0);
}
