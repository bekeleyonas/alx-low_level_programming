#include "main.h"
/**
  * *_strncpy - Copy n characters of a string
  * @dest: Destination value
  * @src: Source value
  * @n : number of char to copy
  * Return: the pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j, m = n-1;

	j = 0;
	while ((src[j] != '\0') && j <= m)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
