#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes here */
/**
 * main - starting point for the app
 * Return: me (success)
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else if (i % 2 == 0)
	{
	printf("%d is positive\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
