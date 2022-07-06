#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*Author: Adeniyi Obanla*/

/**
* main - calls to prints alphabets in lowercase
* description: 'A program to print in lowercase'
* Return: Always 0
* print_alphabet - alphabets in lowercase
*/

int main(void)
{
	print_alphabet();

	return (0);
}

/**
*print_alphabet - stores alphabets in lowercase
*/

void print_alphabet()
{
	{
	#define letter ('a'; 'z')
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	}
}
