#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members of array.
 * @size: size of each member.
 * Return: If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *len;
	char *flag;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = malloc(size * nmemb);

	if (len == NULL)
		return (NULL);

	flag = len;

	for (index = 0; index < (size * nmemb); index++)
		flag[index] = '\0';

	return (len);
}
