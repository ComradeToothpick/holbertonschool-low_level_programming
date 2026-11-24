#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - Prints the numbers passed to the function, with the included
 * separator between them
 * @separator: The string to print between each number
 * @n: The number of numbers passed to print_numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		if (separator != NULL && i < n - 1)
		{
			str = va_arg(list, char *);
			if (str != NULL)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("%s%s", "(nil)", separator);
			}
		}
		else
		{
			str = va_arg(list, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
