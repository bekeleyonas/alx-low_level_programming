#include "main.h"
/**
  * _print_rev_recursion - prints a string in reverse.
  * @s: string to print
  *
  * Return: the memory area filled
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
