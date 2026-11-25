#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a given name using the given function pointer
 * @name: The memory address of the string to print with f
 * @f: The memory address of the function to print name with
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
