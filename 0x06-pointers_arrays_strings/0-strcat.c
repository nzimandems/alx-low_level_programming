#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: string value
 */
char *_strcat(char *dest, char *src)
{
	int ch, sh;

	ch = 0;
	sh = 0;
	while (dest[ch] != 0)
	{
		ch++;
	}
	while (src[sh] != 0)
	{
		dest[ch + sh] = src[sh];
		sh++;
	}
	dest[ch + sh] = 0;
	return (dest);
}
