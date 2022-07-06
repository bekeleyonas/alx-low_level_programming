#include <stdio.h>
#include <limits.h>
/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 2, tmp;
	unsigned long pre = 1, last = 2, sum = last;

	printf("%lu", pre);
	printf(", %lu", last);

	while (i <= 92)
	{
		sum = last + pre;

		printf(", %lu", sum);

		pre = last;
		last = sum;

		i = i + 1;
	}
	for (i = 93; i <= 98; i++)
	{
		sum = (last + pre) / 10;
		tmp = (last + pre) % 10;
		printf(", %lu%d", sum,tmp);
		pre = last;
		last = sum;
	}
	printf("\n");
	return (0);

}
