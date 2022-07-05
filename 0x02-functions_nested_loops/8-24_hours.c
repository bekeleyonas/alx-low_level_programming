#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * jack_bauer -  reruns absolute value of n
 * Return: 1 for lower case or 0 for other.
 */

void jack_bauer(void)
{
	int h0, h1, m0, m1;

	for (h0 = 1; h0 <= 2; h0++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			for (m0 = 0; m0 <= 5; mo++)
			{
				if (((h0 <=1) && (m1 <= 9)) || ((h0 <= 2) && (h1 <= 3)))
				{
					for (m1 = 0; m1 <= 9; m1++)
					{
						_putchar('0' + h0);
						_putchar('0' + h1);
						_putchar(':');
						_putchar('0' + m0);
						_putchar('0' + m1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
