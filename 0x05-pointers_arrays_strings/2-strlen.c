#include "main.h"
#include <stdio.h>

/**
 * _strlen - to print the length of a string
 * @s: is the pointer
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
	length += 1;
	s += 1;
	}
	return (length);
}
