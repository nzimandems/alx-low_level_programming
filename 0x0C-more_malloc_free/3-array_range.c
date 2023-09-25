#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * return: the newly created arrays
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
