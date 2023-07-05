#include "main.h"

/**
 * string_toupper - fumction changes all lowercase letters to of a string to uppercase
 *@s: pointer
 *
 * Return: string value.
 */
char *string_toupper(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		if (s[b] >= 97 && s[b] <= 122)
	{
		s[b] = s[b] - 32;
	}
	else
	{
	}

	}
	return (s);
}
