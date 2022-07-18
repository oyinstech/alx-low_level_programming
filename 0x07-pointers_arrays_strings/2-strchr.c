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
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
