#include "main.h"
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

/* betty style doc for function main goes there */

/* Function definition for  the function that prints a to z */

/**
 * print_alphabet - Prints the a to z.
 *
 * Return: no return.
 */

void print_alphabet(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
