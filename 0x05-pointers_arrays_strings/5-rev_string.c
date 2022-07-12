#include "main.h"

/**
 * rev_string - string value to be reversed.
 * @s : pointer to first string value
 * Return: length of the string.
 */

void rev_string(char *s)
{
	int c, i, j;
	char *stmp, tmpch;

	stmp = s;
	c = 0;
	while (s[c] != '\0')
		c++;

	for (i = 1; i < c; i++)
		stmp++;
	for (j = 0; j < (c / 2); j++)
	{
		tmpch = s[j];
		s[j] = *stmp;
		*stmp = tmpch;
		stmp--;
	}

}
