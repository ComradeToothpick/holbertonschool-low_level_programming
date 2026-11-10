#include "main.h"

/**
 * swap_int - takes the memory address of 2 integers and swaps their values
 * @a: the memory address of the first integer
 * @b: the memory address of the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
