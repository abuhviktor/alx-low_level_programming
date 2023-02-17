#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 97; q < 123; i++)
	{
		if (q != 101 && q != 113)
		{
			putchar(q);
		}
	}
	putchar('\n');
	return (0);
}
