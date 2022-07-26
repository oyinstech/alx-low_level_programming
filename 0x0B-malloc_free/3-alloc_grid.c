#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 * Return: NULL on failure, If width or height is 0 or
 * negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **let:
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	let = (int **) malloc(sizeof(int *) * height);

	if (let == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		let[i] = (int *) malloc(sizeof(int) * width);
		if (let[1] == NULL)
		{
			free(let);
			for (j = 0; j <= i; j++)
				free(let[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			let[i][j] = 0;
		}
	}
	return (let);
}
