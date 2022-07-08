#include "main.h"

/**
 * print_line -  print - - n times
 *
 * @n : number of times to print
 * Return: none
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
