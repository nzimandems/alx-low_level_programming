#include <stdio.h>

/**
 * main - base 16 numbers in lowercases
 * description: print all base 16 numbers in lower case
 * return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 'f'; ch++)
	{
		putchar((ch % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
