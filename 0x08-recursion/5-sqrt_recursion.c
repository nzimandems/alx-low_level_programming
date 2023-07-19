#include "main.h"

/**
 * _sqrt - Function prints the integer
 * @n: first value
 * @i: second value
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt(n, i));
}
