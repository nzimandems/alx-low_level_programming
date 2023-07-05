#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: difference value
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2 && !(diff = *s1++ - *s2++))
	continue;

	return (diff);
}
