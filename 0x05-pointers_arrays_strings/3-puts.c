#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	i = 0;
	for (str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
