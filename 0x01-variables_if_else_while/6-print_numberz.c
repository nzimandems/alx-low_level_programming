#include <stdio.h>

/**
 * main - all single digits
 * description: Prints from 0 to 9
 * return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		putchar((i %10) + '0');
	}
	putchar('\n');
	return (0);
}
