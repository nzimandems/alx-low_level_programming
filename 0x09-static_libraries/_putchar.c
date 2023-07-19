#include <unistd.h>
#include "main.h"

/**
 * _putchar - function will write character c to stdout
 * @c: is the the character to print
 * return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
