#include <stdio.h>

/**
 * main reverse letter
 * description: prints the lowe case alphabets in reverse
 * return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
