#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * _isalpha -  check if an input is lower case character
 * @c : integer - the character to be checked
 * Return: 1 for lower case or 0 for other.
 */

int _isalpha(int c)
{

	if (((c >= 64) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
