#include "main.h"
/**
 * _strspn - Function gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int ch = 0;

	while (s[i] != '\0')
	{
		while (accept[ch] != '\0')
		{
			if (accept[ch] == s[i])
			{
				count++;
			}
			ch++;
		}
		ch = 0;
		i++;
		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
	_putchar('\n');
}
