#include "main.h"
/**
  * _strspn - counts the charaters in a given string  in another string
  * @s: search target
  * @accept: character to find
  *
  *
  * Return: the memory area filled
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	while (accept[j])
	{
		i = 0;
		while ((s[i] != 32) && (s[i]))
		{
			if (s[i] == accept[j])
				count = count + 1;
			i++;
		}
		j++;
	}
	return (count);
}
