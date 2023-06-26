#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: value of pointer
 *
 * Return: string value
 */
void rev_string(char *s)
{
	int x, y;
	char a;

	x = strlen(s);
	x--;
	for (y = 0; y < x; y++)
	{
		a = s[x];
		s[x] = s[y];
		s[y] = a;
		x--;
	}
}
