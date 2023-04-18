/*
 * Author: Adeniyi Obanla
 * Project Name: 100-atoi.c
 */
#include"main.h"
/**
 * _atoi - converts string to integer
 * @s: characters to be converted
 * Return: characters converted
 */
int _atoi(char *s)
{
	int i = 0, res;
	signed int sign = 1;
	unsigned int num = 0;

	do {
		if (s[i] == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && s[i] <= '9')
			num = (num * 10) + (*(s + i) - '0');
		i++;
	} while (s[i] != '\0');
	res = sign * num;
	return (res);
}
