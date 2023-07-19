#include "main.h"

/**
 * _pow_recursion - function returns the value of x raise to the power of y
 * @x: the whole number
 * @y: the power
 *
 * Return: integer value.
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	power = x * _pow_recursion(x, y - 1);

	return (power);
}
