#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns one number to another number
 * @n: first no.
 * @m: second no.
 * Return: number of bits needs to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

