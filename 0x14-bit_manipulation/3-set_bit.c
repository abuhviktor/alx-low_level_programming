#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index.
 * @index: index from 0 of the bit
 * @n: pointer number of unsigned long int
 *
 * Return: 1 if it works, or -1 if it doesn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
