#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer change
 * @to: string to set or change pointer to
 *
 * Return: no return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
