#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch, ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = ch + 1; ch2 <= 57; ch2++)
		{
			putchar(ch);
			putchar(ch2);
/*			if ((ch != 56) && (ch2 != 57))  */
/*			{ */
				putchar(',');
				putchar(' ');
/*			} */
		}
	}
	putchar('\n');
	return (0);
}
