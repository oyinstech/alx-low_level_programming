#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: unsigned long int to search
 * @index: index of the bit
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
