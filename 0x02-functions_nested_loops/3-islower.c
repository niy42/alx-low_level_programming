#include "main.h"
/**
 * _islower(int c) - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 for lowercase, otherwise returns 0
 */
int _islower(int c)
{
	 	if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
