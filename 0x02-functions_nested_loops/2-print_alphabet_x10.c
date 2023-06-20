#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: alphabets
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
