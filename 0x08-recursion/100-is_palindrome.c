#include "main.h"
/**
  * is_palindrome - checks if matches in reverse.
  * @s: a string
  *
  * Return: o ror 1
  */
int is_palindrome(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	return checkpalind(s, n);
}
/**
 * checkpalind( - compares string with the far end
 * @s: string
 * @n: length
 *
 * Return: On success 1..
 */
int checkpalind(char *s, int n)
{
	if (*s != *(s + n))
		return (0);
	else if (*s == 0)
		return (1);
	return (checkpalind(s + 1, n - 2));
}
