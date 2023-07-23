#include "3-calc.h"
#include "function_pointers.h"


/**
 * get_op_func - selects the right operation to perform
 *
 * @s: operation to perform
 *
 * Return: A pointer to the function corresponding to s
 *
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
