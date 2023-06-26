#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers and print them
 * @a: first pointed value
 * @b: second pointed value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
