#include "main.h"

/**
 * factorial - Function returns the factorial of n
 * @n: integer
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
