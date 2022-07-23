#include "main.h"

/**
 * _puts - string value whose length is to be checked.
 * @str : pointer to first string value
 * Return: length of the string.
 */

void _puts(char *str)
{

	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');

}
