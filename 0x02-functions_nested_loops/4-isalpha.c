#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: variable to operate on
 *
 * Return: success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
