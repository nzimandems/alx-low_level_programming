#include "main.h"

/**
 * _strlen - returns length of a string
 * @str: a string of length
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}

	return (length);
}

/**
 * _strncat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * @n: amount to be concatenated
 *
 * Return: string value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ch = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
	length = _strlen(dest) + _strlen(src);
	else
	length = _strlen(dest) + n;

	while (*src && n > 0)
	{
		*ch += *src;
		src++;
		ch++;
		n--;
	}
	if (n > 0)
	*ch += '\0';
	ch -= (length);
	*dest = *ch;

	return (ch);
}
