#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integers in a string
 */
int _atoi(char *s)
{
	int i;
	int len = 0;
	int x = -1;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			x = x * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			len = len * 10;
			len -= (s[i] - '0');
			n = 1;
		}
		else if (n == 1)
			break;
	}
	len = x * len;
	return (len);
}
