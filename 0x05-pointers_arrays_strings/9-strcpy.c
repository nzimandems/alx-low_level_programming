#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 * @dest: a pointer to buffer
 * @src: a pointer to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
