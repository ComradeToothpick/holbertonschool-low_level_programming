#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - returns the appropriate function for the given operation char
 * @s: The operator character
 * Return: The pointer to the function that corresponds with the given op char
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
	int i;

	i = 0;
	while (i < 6)
	{
		if (i == 5)
		{
			return (NULL);
		}
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
