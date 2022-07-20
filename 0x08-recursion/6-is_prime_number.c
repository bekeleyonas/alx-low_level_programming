#include "main.h"
/**
  * is_prime_number - checks prime number, otherwise return 0.
  * @n: integer
  *
  * Return: factoria
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - checks prime number, otherwise return 0.
  * @n: integer
  * @i: integer
  *
  * Return: factoria
  */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
