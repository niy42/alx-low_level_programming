#include "main.h"
#include <unistd.h>
/**
*_putchar - writes parameter c to stand output
*@c: argument to be printed out
*
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
