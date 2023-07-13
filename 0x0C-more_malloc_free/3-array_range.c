#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @*array_range - function creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, ch;

	ch = (max - min) + 1;
	if (min > max)
	return (NULL);

	arr = malloc(sizeof(int) * ch);
	if (arr == NULL)
	return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
