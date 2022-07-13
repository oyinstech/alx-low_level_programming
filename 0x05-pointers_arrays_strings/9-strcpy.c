#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string pointed by src,
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
