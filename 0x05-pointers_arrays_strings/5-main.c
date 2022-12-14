#include <stdio.h>
#include "main.h"

void rev_string(char *);
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);

	rev_string(s);

	printf("%s\n", s);
	
	return(0);
}
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;
	
	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j <=  i/2; j++)
	{		
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
