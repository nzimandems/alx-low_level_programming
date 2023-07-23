#include "variadic_functions.h"

/**
 * sum_them_all -sum of all it's parameters
 * @n: number of parameters
 *
 * return: the sum of all parameters. if n equals 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	i = 0, sum = 0;

	va_start(numbers, n);
	while (i++ < n)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
