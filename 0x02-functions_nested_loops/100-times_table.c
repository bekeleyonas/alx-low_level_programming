#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * print_times_table -  reruns multiplication time table
 * @n : number to stop
 * Return: 1 for lower case or 0 for other.
 */

void print_times_table(int n)
{
	int row, col, rem, quo, quo2, prod;

	if ((n >= 0) && (n < 15))
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				if (prod <= 9)
				{
					if (col != 0)
					{
						_putchar (',');
						_putchar (' ');
						_putchar (' ');
						_putchar (' ');
					}
					_putchar('0' + prod);
				}
				else if (prod > 99)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ('0' + (prod / 100));
					_putchar ('0' + ((prod / 10) % 10));
					_putchar ('0' + (prod % 10));
				}
				else
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + (prod / 10));
					_putchar ('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
