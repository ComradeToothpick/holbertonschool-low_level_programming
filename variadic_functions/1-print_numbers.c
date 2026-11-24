#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Prints the numbers passed to the function, with the included
 * separator between them
 * @separator: The string to print between each number
 * @n: The number of numbers passed to print_numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		if (separator != NULL && i < n - 1)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
