#include"main.h"
/**
 * print_array - prints n element of an array of integers
 * @a: elements of each array to be printed
 * @num: Total number of elements to be printed
 */
void print_array(int *a, int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		printf("%d", *(a + i++));
		if (i == num - 1)
			break;
		putchar(',');
	}
	putchar('\n');
}
