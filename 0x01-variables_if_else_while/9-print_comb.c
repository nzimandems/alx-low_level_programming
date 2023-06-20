#include <stdio.h>

/**
 * main - All combinations of single digit numbers
 * Description: print numbers 0-9 in ascending order
 * separated with whitespaces and commas
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
	putchar((ch % 10) + '0');
	if (ch == 9)
	continue;
	else
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
