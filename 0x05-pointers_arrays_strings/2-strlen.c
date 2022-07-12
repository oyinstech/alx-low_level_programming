#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the returns length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
	}

	return (i);
}
