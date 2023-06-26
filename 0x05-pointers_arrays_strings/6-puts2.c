#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints all other character of a string, from the first
 * character
 * @str: value of pointer
 *
 * Return: string value
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
	j++;

	for (i = 0; i < j; i += 2)
	_putchar(str[i]);
	_putchar('\n');
}
