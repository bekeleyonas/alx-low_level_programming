#include "main.h"

/**
 * _strlen - string value whose length is to be checked.
 * @s : pointer to first int value
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count++;
	
	return (count);
}
