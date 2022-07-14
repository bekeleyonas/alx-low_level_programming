#include "main.h"
/**
  * _strcmp - compares two  strings
  * @s1: string to compare
  * @s2: string to compare against
  * 
  * Return: 0 for different 1 for match
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n, ret = 0;

	while (s1[i] != '\0')
		i++;
	n = i;
	while (s2[i] !='\0')
		i++;
	if (i < n)
		n = i;

	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			break;
		}
	}

	return (ret);
}
