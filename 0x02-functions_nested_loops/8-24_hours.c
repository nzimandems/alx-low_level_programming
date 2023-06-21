#include "main.h"

/**
 * jack_bauer - function prints every minute of the day of jack bauer
 * return: 0 success
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 1- + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
