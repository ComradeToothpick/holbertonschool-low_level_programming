#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Prints any number of arguments of any type
 * @format: The character types listed in string form
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, length, code;
	char c;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	i = 0;
	c = '0';
	length = 0;
	while (c != 0)
	{
		c = *(format + length);
		length++;
	}
	va_start(list, format);
	while (i < length - 2)
	{
		code = handle_cases(&list, i, format);
		switch (code)
		{
		case 0:
			printf(", ");
			break;
		}
		i++;
	}
	handle_cases(&list, i, format);
	printf("\n");
}

/**
 * handle_cases - Handles the different cases of the format characters
 * and prints them
 * @list: The memory address of the started list of arguments
 * @i: The index of the char in format to check
 * @format: The string containing the format of the arguments to print them as
 * Return: 0 on success, 1 if *(format + i) is not a valid format char
 */
int handle_cases(va_list *list, int i, const char * const format)
{
	char c, *str;

	c = *(format + i);
	switch (c)
	{
	case 'c':
		printf("%c", va_arg(*list, int));
		break;
	case 'i':
		printf("%d", va_arg(*list, int));
		break;
	case 'f':
		printf("%f", va_arg(*list, double));
		break;
	case 's':
		str = va_arg(*list, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		break;
	default:
		return (1);
	}
	return (0);
}
