#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* Below is the function definition for a function that prints a to z */

void print_alphabet();

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar(ch);
	}
	putchar('\n');
}
