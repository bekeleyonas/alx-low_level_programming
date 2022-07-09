#include "main.h"
#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, i3, i5;

	for (i = 1; i <= 100; i++)
	{
		i3 = i % 3;
		i5 = i % 5;
		if (i3 == 0 && i5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i3 == 0)
		{
			printf("Fizz");
		}
		else if (i5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
