#include "main.h"

/**
 * print_array - string value whose length is to be checked.
 * @a : array to print
 * @n : n characters to print
 * Return: length of the string.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
