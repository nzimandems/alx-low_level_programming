#include "main.h"

/**
 * _islower - checks all the lowercase characters
 * @c: string to operate on
 *
 * return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
