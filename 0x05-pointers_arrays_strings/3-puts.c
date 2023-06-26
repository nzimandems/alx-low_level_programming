#include "main.h"
#include <stdio.h>

/**
 * _puts - to print a string
 * @str: value of a pointer
 *
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
