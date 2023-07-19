#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array
 * @size: size of array in memory
 * @c: memory contents
 *
 * Return: Success
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
