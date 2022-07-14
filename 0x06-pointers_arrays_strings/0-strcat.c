#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be added to
 * @src: string to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
