#include "main.h"

/**
 * _strlen - return length of string
 * @s: string input
 * return: length
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);

}

/**
 * _palindrome_check - check palindrome of a string
 * a palindrome is when orignal and reverse string is the same
 * @s: string
 * @l: length
 * @c1: check one
 * @c2: check two
 * return: 1 is a palindrom o if not
 */

int _palindrome_check(char *s, int l, int c1, int c2)
{
	if (c1 >= c2)
		return (1);

	if (s[c1] != s[c2])
		return (0);
	else
		return (_palindrome_check(s, l, c1 + 1, c2 - 1));
}

/**
 * is_palindrome - status of a palindrome
 * @s: input string
 * return: status
 */

int is_palindrome(char *s)
{
	int len;

	if (s[0] == '\0')
		return (1);

	len = _strlen(s);

	return (_palindrome_check(s, len, 0, len - 1));
}
