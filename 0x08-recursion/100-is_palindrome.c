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

	n = countlength(s, 0);
	return (checkpalind(s, n));
}
/**
 * countlength - obtains length of a
 * @str: string
 * @n: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int countlength(char *str, int n)
{
	if (*str == 0)
		return (n - 1);
	return (countlength(str + 1, n + 1));
}
/**
 * checkpalind - compares string with the far end
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
