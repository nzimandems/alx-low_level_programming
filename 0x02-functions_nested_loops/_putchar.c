#include <unistd.h>
#include "main.h"
/**
 * main - _putschar writes the character c to stdout
 * Description: prints ...
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
