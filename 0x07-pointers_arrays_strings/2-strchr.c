#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first occurrence of the character
 * c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return ('\0');
	}

	return (0);
}
