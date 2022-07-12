#include "main.h"
#include <stddef.h>
/**
*_strlen - returns the lenght of a string
*@s: value of character
*
*Return: length of a string
*/
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
