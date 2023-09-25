#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments in the command line
 * @argv: an array containing the command line arguments
 *
 * return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = 1;

		for (i = 1; i < 3; i++)
		mul *= atoi(argv[i]);

		printf("%d\n", mul);
	}
	return (0);
}
