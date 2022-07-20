#include "main.h"
/**
  * _strlen_recursion - returns the length of a string.
  * @s: string to print
  *
  * Return: the memory area filled
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if ((n >= 0) && (n<= 1))
		return (1);
	else
		return (n * factorial(n - 1));
}
