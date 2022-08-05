#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	char *str;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nums, char *);
		if (str == NULL)
			printf("%s", str);
		else
			printf("%p", str);
		if (separator && i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(nums);	
}
