#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if  (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
