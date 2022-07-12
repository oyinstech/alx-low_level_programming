#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, len, beg;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	beg  = 0;

	beg = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[beg];
		s[beg--] = temp;
	}
}
