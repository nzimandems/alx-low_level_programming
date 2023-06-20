#include <stdio.h>
#include <time.h>

/**
 * main- This program prints alphabet in lower case
 *
 * main - Print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
