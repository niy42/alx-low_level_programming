#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strcat - appends string from source to destination
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp;

	if (dest == NULL)
	{
		fprintf(stderr, "error - no memory, unable to append");
		exit(1);
	}
	else
	{
		tmp = dest;
		do {
			++dest;
		} while (*dest);
		while (*src)
		{
			*dest = *src;
			dest++;
			++src;
		}
	}
	dest = '\0';
	return (tmp);
}
