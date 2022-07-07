#include "main.h"

/**
 * void more_numbers(void) - prints 0 to 9.
 *more_numbers -  print 0 - 14 10 times
 *
 * Return: none
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j/10) + '0');
			}
			_putchar((j%10) + '0');
		}
		_putchar('\n');
	}
}
