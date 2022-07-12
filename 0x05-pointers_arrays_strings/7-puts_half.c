#include "main.h"

/**
 * puts_half - string value whose length is to be checked.
 * @str : pointer to first string value
 * Return: length of the string.
 */

void puts_half(char *str)
{
	int c = 0;
	int i, half;

	while (str[c] != '\0')
		c++;
	half = c / 2;

	if (c % 2 != 0)
	{
		half++;
	}
	for (i = 0; i < half; i++)
		_putchar(str[i]);

	_putchar('\n');
}
