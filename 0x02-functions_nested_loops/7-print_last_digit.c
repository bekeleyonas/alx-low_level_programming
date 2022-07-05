#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * print_last_digit -  reruns absolute value of n
 * @n : integer - number to be checked
 * Return: 1 for lower case or 0 for other.
 */

int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar('0' + num);
	return (num);
}
