#include"main.h"
/**
 * _strcpy - copies string from one pointer variable to another
 * @src: first string copy
 * @dest: second string copy or new copy
 * Return: new copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (; *(src + i);)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
