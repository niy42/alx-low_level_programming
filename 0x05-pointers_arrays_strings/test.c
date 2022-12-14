#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 2;

	while ((i < 10) && (j < 14))
	{
		if (i == 1)
		{
			j -= 7;
		}
		else if (j == 1)
		{
			i += j;
		}
		else if (i == 6)
		{
			while (j > 0)
			{
				j--;
				i++;
			}
		}	
		i++;
		j+=2;
	}
	return (0);
}	
