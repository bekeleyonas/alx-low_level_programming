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
	int j = 0;

	while ((src[j] != '\0') && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
