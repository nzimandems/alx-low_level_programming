#include "main.h"

/**
 * is_prime_number - function returns 1 if prime and 0 if not
 * @n: integer
 *
 * return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (n % 2 == 1)
	{
		return (1);
	}
	return (is_prime_number(n));
}
