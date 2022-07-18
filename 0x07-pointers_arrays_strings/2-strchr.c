#include "main.h"
/**
  * *_strchr - searched a charater in a string
  * @s: search target
  * @c: character to find
  *
  *
  * Return: the memory area filled
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *loc;

	loc = '\0';
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			loc = s + i;
			break;
		}
		i++;
	}
	return (loc);
}
