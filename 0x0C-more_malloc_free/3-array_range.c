#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value in range.
 * @max: maximum value in range.
 * Return: If min > max, return NULL, If malloc fails, return NULL,
 */
int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
		return (NULL);

	str = malloc(((max - min) + 1) * sizeof(int));

	if (!str)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		str[i] = (min + i);

	return (str);
}
