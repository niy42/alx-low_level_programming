#include <unistd.h>

/**
*_putchar - to write the character c to stdout
*@c: the character to be print
*
*Return: on success 1.
*on error, -1 is returned, and erro number is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
