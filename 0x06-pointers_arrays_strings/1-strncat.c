#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be added to
 * @src: source string
 * @n: number of bytes to add
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
