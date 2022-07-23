#include "main.h"
/**
  * *_memcpy - copies memory from source to destination
  * @src: source content
  * @dest: destination memory
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
