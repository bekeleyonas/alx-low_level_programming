#include "main.h"
/**
  * *_strpbrk - counts the charaters in a given string  in another string
  * @s: search target
  * @accept: character to find
  *
  *
  * Return: the memory area filled
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[j])
	{
		i = 0;
		while (accept[i])
		{
			if (s[j] == accept[i])
				return (s + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
