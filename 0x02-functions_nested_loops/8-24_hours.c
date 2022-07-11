#include "main.h"

/**
*jack_bauer - prints time from 00:00 to 23:59
*
*Return: void
*/
void jack_bauer(void)
{
	char c[6] = "00:00\n";

	while (c[0] != '2' ||  c[1] != '4')

	{
		int _putchar(char c);

		c[4]++;

		if (c[4] == '9' + 1)

		{
			c[4] = '0';
			c[3]++;
		}

		if (c[3] == '6')

		{
			c[3] = '0';
			c[1]++;

		}

		if (c[1] == '9' + 1)

		{
			c[1] = '0';
			c[0]++;
		}
	}
}
