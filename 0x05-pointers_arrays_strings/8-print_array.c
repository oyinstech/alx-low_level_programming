#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: int type integer
 * You can only use _putchar to print.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
