#include "main.h"

/**
 * main - largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long  d;

	while (d < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num = num / 2;
			continue;
		}

		for (d = 3; d < (num / 2); d = d + 2)
		{
			if ((num % d) == 0)
				num = num / d;
		}
	}

	printf("%ld\n", num);
	return(0);
}
