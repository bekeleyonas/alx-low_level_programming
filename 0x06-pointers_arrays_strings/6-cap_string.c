#include "main.h"
/**
  * *cap_string - chars to uppercase
  * @str: string
  *
  * Return:  string
  */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		for (j = 0; j <= 12; j++)
		{
			if ((i == 0) || (str[i - 1] == sep[j]))
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
