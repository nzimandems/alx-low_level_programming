#include "main.h"
/**
 * is_prime_number _ Function returns 1 if prime and 0 if not prime
 * @n: is the integer
 * return:1 pr 0
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
