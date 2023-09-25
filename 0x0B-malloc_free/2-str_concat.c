#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fucntion concatenates two strings
 * @s1: the string concatenated on
 * @s2: the string being concatenated to s1
 * return: NULL is concatenation fails, otherwise a pointer of the newly allocated memory containing concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *p_str;
	int i, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	p_str = malloc(sizeof(char) * len);

	if (p_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p_str[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		p_str[index++] = s2[i];

	return (p_str);
}
