#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function prints anyting
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list nums;
	int i = 0;
	char *tmp;

	va_start(nums, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(nums, int));
				break;
			case 'i':
				printf("%d", va_arg(nums, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(nums, double));
				break;
			case 's':
				tmp = va_arg(nums, char*);
				if (tmp != NULL)
				{
					printf("%s", tmp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(nums);
	printf("\n");
}
