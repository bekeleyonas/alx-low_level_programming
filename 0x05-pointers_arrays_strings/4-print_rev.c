#include "main.h"

/**
 * print_rev - string value whose length is to be checked.
 * @s : pointer to first string value
 * Return: length of the string.
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}
