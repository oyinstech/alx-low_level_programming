#include "main.h"

/*
 * _memset - fills memory with a constant byte
 * @s - string
 * @b - a character
 * @n - an integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;

	return (s);
}
