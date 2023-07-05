#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: first pointer
 * @src: second pointer
 * @n: size_t
 * Return: string values
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
