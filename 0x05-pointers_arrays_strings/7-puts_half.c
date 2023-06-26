#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: value of pointer 
 * 
 * 
 * Return: string value
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
