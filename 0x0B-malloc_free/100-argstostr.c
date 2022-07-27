#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates alr the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: NULL if ac == 0 or av == NULL, pointer
 * to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *len;
	int i, x, flag = 0, c = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			c++;
		}
		c++;
	}
	c++;
	len = malloc(sizeof(char) * c);
	if (len == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			len[flag] = av[i][x];
			flag++;
		}
		len[flag] = '\n';
		flag++;
	}
	len[flag] = '\0';
	return (len);
}
