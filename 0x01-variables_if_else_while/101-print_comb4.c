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
	int ch, ch2, ch3;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = ch + 1; ch2 <= 57; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= 57; ch3++)
			{
				putchar(ch);
				putchar(ch2);
				putchar(ch3);
				if (!((ch == 56) && (ch2 == 57) && (ch3 == 55)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
