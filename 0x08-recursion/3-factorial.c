#include "main.h"
/**
  * factorial -  returns the length of a string.
  * @n: integer
  *
  * Return: factoria
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if ((n >= 0) && (n <= 1))
		return (1);
	else
		return (n * factorial(n - 1));
}
