#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * _abs -  reruns absolute value of n
 * @n : integer - number to be checked
 * Return: 1 for lower case or 0 for other.
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
