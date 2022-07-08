#include "main.h"

/**
 * print_square -  print - # size times
 *
 * @size : number of times to print
 * Return: none
 */

void print_square(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			k = size - i;
			for (j = 1; j <= k; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
