#include "main.h"
#include <stdio.h>
/**
 * print_number -  print any integer
 *
 * @n : number of times to print
 * Return: none
 */

void print_number(int n)
{
	unsigned int m, d;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		m = n;
	}

	m = m / 10;

	if (m != 0)
	{
		print_number(m);
	}
	d = n % 10;
	_putchar('0' + d);
}
