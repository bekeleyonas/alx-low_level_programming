#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 2;
	float pre = 1, last = 2, sum = last;

	printf("%lu", pre);
	printf(", %lu", last);

	while (i <= 98)
	{
		sum = last + pre;

		printf(", %lu", sum);

		pre = last;
		last = sum;

		i = i + 1;
	}

	printf("\n");
	return (0);
}
