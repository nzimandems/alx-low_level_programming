#include "main.h"

/**
 * print_alphabet - prints aphabet in lowercase
 *
 * return: always 0.
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
