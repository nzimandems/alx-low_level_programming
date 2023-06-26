#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integer
 * @a: first value
 * @n: second value
 *
 * Return: array element
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
