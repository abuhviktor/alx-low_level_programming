#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the name input
 * @f: function of pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
