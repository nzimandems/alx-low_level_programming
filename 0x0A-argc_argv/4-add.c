#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments in the command line
 * @argv: an array containing the command line arguments
 *
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, add;

	for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				{
					if (argv[i][j] < '0' || argv[i][j] > '9')
						{
							return (printf("Error\n"), 1);
						}
				}
			add += atoi(argv[i]);
		}
	printf("%d\n", add);
	return (0);
}
