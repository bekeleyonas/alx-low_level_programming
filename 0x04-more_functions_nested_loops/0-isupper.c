#include "main.h"

/**
 * _isupper - check  if the input is upper case.
 * @c : inpur to check for upper case
 * Return: 1 for upper case and  0 otherwise.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
