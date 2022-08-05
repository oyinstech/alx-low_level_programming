#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: number of parameters
 * Return: 0 if n = 0 or sum of parameters if succesful
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
