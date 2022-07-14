#include "main.h"
/**
  * reverse_array -  reverses an array
  * @a: array to reverse
  * @n: number of elements
  * Return: none
  */
void reverse_array(int *a, int n)
{
	int i = 0, tmpval = 0, lim;

	if (n % 2 == 0)
	{
		lim = n / 2;
	}
	else
	{
		lim = (n - 1) / 2;
	}
	for (i = 0; i <= lim; i++)
	{
		tmpval = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmpval;
	}
}
