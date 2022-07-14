#include "main.h"
/**
  * *_strncat - Concatenates two string
  * @dest: Destination value
  * @src: Source value
  * @n : number of char to copy
  * Return: the pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, m = n;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (m > j)
		m = j;
	for (j = 0; j < m; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
