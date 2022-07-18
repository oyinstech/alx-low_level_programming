#include "main.h"

/**
 * _memcpy - memset function
 * @dest: destination memory area
 * @src: value that will replace
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
