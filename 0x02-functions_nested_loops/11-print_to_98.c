#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * print_to_98 -  reruns multiplication time table
 * @n : number to start
 * number to  98
 * Return: 1 for lower case or 0 for other.
 */

void print_to_98(int n)
{
	int i, rem, quo;

	for (i = n; i <= 98; i++)
	{
		if (i <= 9)
		{
			_putchar(48 + i);
		}
		else
		{
			quo = i / 10;
			rem = i % 10;
			_putchar(48 + quo);
			_putchar(48 + rem);
		}
		_putchar(' ');
	}
	_putchar('\n');
}
