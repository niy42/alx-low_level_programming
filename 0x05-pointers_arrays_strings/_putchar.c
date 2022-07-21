#include <unistd.h>
#include "main.h"
/**
*_puts - prints to stdout
*@c: value to be printed
*
*Return: On success 1
*on erro return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
