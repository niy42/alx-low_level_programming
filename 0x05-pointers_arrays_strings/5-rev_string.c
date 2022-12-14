/**
 * rev_string - prints string in reverse
 * @s: character to be printed out
 */

void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j <=  i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
