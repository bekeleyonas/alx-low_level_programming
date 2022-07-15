#include "main.h"
/**
  * *leet - chars to with numbers
  * @str: string
  *
  * Return:  string
  */
char *leet(char *str)
{
	int i = 0, j;
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char number[5] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		for (j = 0; j <= 4; j++)
		{
			if ((str[i] == letters[j]) || (str[i] == (letters[j] + 32)))
			{
				str[i] = number[j];
			}
		}
		i++;
	}
	return (str);
}
