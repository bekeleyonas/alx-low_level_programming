#include "main.h"

/**
 * swap_int - swaps the value of two ints.
 * @a : pointer to first int value
 * @b :  pointer to second int value
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int tmpVal = *a;

	*a = *b;
	*b = tmpVal;
}
