#include "main.h"
/**
  * *rot13 - chars to with numbers
  * @str: string
  *
  * Return:  string
  */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
		i++;
	}
	return (str);
}
