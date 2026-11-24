#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Takes the sum of any number of integers n
 * @n: The integers to sum
 * Return: The sum of all n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int total;

	i = 0;
	total = 0;
	va_start(list, n);
	while (i < n)
	{
		total += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (total);
}
