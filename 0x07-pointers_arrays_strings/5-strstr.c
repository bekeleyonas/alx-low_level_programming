#include "main.h"
/**
  * *_strstr - counts the charaters in a given string  in another string
  * @haystack: search target
  * @needle: character to find
  *
  *
  * Return: the memory area filled
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
