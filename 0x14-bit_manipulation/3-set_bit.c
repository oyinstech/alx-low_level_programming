#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: unsigned long to change
 * @index: index of the bit to set to 1
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
