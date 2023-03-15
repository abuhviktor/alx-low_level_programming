#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: no. arguments in command line
 * @argv: array of arguments that contains the command
 *
 * Return: 0 - Success, 1 - Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}	return (0);
