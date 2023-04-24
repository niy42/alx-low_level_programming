#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
/**
 * _strlen - counts each element in the string array
 * @s: characters to be counted
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		index += 1;
		i = i + 1;
	} while (*(s + index) != '\0');
	return (index);
}
/**
 * rand_password - generates random character password
 * @length: length of the password generated
 */
void rand_password(int length)
{
	char *password = malloc(length * sizeof(char));
	int i;
	char *number = "0123456789";
	int number_length = _strlen(number);
	char *upper = "QWERTYUIOPASDFGHJKLZXCVBNM";
	int upper_length = _strlen(upper);
	char *lower = "qwertyuiopasdfghjklzxcvbnm";
	int lower_length = _strlen(lower);
	char *symbol = "!@#$%^&*?+=-";
	int symbol_length = _strlen(symbol);

	srand(time(NULL) * getpid());
	i = 0;
	for (; i < length; i++)
	{
		int randomiser = rand() % 4;

		if (randomiser == 0)
			password[i] = *(number + (rand() % number_length));
		else if (randomiser == 1)
			*(password + i) = lower[rand() % lower_length];
		else if (randomiser == 2)
			password[i] = symbol[rand() % symbol_length];
		else if (randomiser == 3)
			*(password + i) = *(upper + (rand() % upper_length));
		printf("%c", password[i]);
	}
	free(password);
	putchar('\n');
}
/**
 * main - calls rand_password function
 * Return: Always zero (success)
 */
int main(void)
{
	int length = 10;

	rand_password(length);
	return (0);
}
