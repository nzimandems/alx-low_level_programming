#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: integer to operate on
 *
 * Return: (void)
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
