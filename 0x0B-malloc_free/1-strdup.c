#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new allocated space in memory, which contains a copy of the string
 * @str: string to be duplicated
 * return: null if failed - pointer if successful
 */

char *_strdup(char *str)
{
	char *pdup;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	pdup = malloc(sizeof(char) * (len + 1));

	if (pdup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		pdup[i] = str[i];
	pdup[len] = '\0';

	return (pdup);
}
