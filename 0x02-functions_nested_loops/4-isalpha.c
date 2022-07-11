#include "main.h"
/**
*_isalpha - checks and write lowercase or uppercase
*@c: parameter that contains the argument to be passed
*
*Return: 1 if lowercase or uppercase
*Otherwise return 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
