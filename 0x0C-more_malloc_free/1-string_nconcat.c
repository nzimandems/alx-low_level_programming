#include "main.h"
#include <limits.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: concatenated s1 and s2 if the condition is passed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *p;
	
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = 0;
	while (s1[i])
	i++;
	p = malloc(sizeof(*p) * i + n + 1);
	if (p == NULL)
	return (NULL);
	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
		{
			p[j] = s1[j];
		}
		else
		{
			p[j] = s2[k++];
		}
	}
	p[j] = '\0';
	return (p);
}
