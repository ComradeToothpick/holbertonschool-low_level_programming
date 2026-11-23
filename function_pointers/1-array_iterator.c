#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - jhgiuj
 * @array: asda
 * @size: jdsfhi
 * @action: shgdfikj
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
