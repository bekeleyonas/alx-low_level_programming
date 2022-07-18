#include "main.h"

/**
  * print_diagsums - Print the sum of diagonal
  * @a: array of pieces
  * @size :  size of array
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sumd = 0;

	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sumd = sumd + a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum, sumd);
}
