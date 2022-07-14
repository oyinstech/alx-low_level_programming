#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: source string
 * @n: number of elements to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] && i < n) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
