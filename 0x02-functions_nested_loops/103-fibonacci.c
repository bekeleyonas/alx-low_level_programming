#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long pre = 1, last = 2, sum = last;

	while (pre + last < 4000000)
	{
		last = last + pre;

		if (last % 2 == 0)
			sum = sum + last;

		pre = last - pre;

		i = i + 1;
	}

	printf("%ld\n", sum);
	return (0);
}
