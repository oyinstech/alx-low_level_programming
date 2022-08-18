#include "main.h"

/**
 * flip_bits - count bits you need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flips to get from one number to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0,  flip;

	flip = (n ^ m);
	while (flip)
	{
		i += (flip & 1);
		flip >>= 1;
	}
	return (i);
}
