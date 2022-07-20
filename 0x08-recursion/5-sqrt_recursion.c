#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: ineger
  *
  * Return: factoria
  */
int _sqrt_recursion(int n)
{

	return (getsqrt(n, 1));

}
/**
  * getsqrt - gets square root
  * @n: number to calculate the square root
  * @i: counter number
  *
  * Return: the natural square root
  */
int getsqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (getsqrt(n, i + 1));
}
