#include "main.h"

/**
 * _strlen_recursion - function returns the length of a pointer s.
 * @s: pointer
 *
 * return: the length of string value
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
