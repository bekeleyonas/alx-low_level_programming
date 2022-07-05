#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * times_table -  reruns multiplication time table
 * Return: 1 for lower case or 0 for other.
 */

void times_table(void)
{
	int row, col, rem, quo, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
 			if (prod <= 9)
			{
				if (prod != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar('0' + prod);
			}
			else
			{
				quo = prod / 10;
				rem = prod % 10;
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + quo);
				_putchar ('0' + rem);

			}
		}
	}
}
