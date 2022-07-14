#include "main.h"

/**
 * leet - encodes a string
 * @s: string to be encoded
 * Return: the string;
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
				s[i] = sub[j];
		}
		i++;
	}
	return (s);
}
