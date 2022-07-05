#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * print_sign -  check if an input is +,- or 0
 * @n : integer - the character to be checked
 * Return: 1 for lower case or 0 for other.
 */

int print_sign(int n)
{

	if (n < 0)
	{
		return ('-');
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return ('+');
	}
}
