#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * _islower -  check if an input is lower case character
 *
 * Return: no return.
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
