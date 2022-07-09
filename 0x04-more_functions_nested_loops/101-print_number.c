#include "main.h"

/**
 * print_number -  print any integer
 *
 * @n : number of times to print
 * @m : temporary integer holder
 * @d : last digit holder
 * Return: none
 */

void print_number(int n)
{
	int m, d;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = m * (-1);
		n  = m;
	}

	m = m / 10;

	if (m != 0)
	{
		print_number(m);
	}
	d = n % 10;
	_putchar(48 + d);
}
