#include "main.h"

/**
 * _strlen_recursion - Function returns the length of pointer s.
 * @s: pointer
 *
 * return: length of string value
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
