#include "main.h"

/*
 * _memset - memset function
 * @s - string
 * @b - character
 * @n - integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;

	return (s);
}
