#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be set to char
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
