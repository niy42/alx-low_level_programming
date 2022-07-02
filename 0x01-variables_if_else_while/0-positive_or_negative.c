#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* 0-positive_or_negative.c */



/* detects and prints the value of a random number */

int main(void)

{

	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);

	else if (n < 0)
	printf("%d is negative\n", n);

	else
	printf("%d is zero\n", n);

	return (0);

}
