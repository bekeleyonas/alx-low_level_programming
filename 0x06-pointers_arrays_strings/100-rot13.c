#include "main.h"
/**
  * *rot13 - chars to with numbers
  * @st: string
  *
  * Return:  string
  */
char *rot13(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		while ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))
		{
			if ((st[i] > 'm' && st[i] <= 'z') || (st[i] > 'M' && st[i] <= 'Z'))
			{
				st[i] = st[i] - 13;
				break;
			}
			st[i] = st[i] + 13;
			break;
		}
		i++;
	}
	return (st);
}
