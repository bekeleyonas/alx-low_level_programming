#include "main.h"

/**
 * puts2 - string value whose length is to be checked.
 * @str : pointer to first string value
 * Return: length of the string.
 */

void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
		c++;
	for (i = 0; i < c; i = i + 2)
		_putchar(str[i]);

}
