#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strncat - appends limited source characters to destination
 * @src: source string
 * @dest: destination string
 * @n: limited characters of src string to be appended to dest
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *tmp;

	i = 0;
	if (dest == NULL)
	{
		fprintf(stderr, "error - no memory, unable to append");
		exit(1);
	}
	else
	{
		tmp = dest;
		do {
			dest++;
		} while (*dest);
		while (src[i] && i < n)
		{
			*dest = src[i];
			dest++;
			++i;
		}
	}
	dest = '\0';
	return (tmp);
}
