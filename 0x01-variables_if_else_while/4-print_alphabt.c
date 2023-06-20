#include <stdio.h>
/**
 * main - Omitting letter q and e
 * Description: prints alphabets without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
