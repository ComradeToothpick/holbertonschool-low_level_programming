#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an element in the array that matches the search
 * function criteria (i.e. the search function returns a non 0 value)
 * @array: The array of integers to search
 * @size: the size of the array
 * @cmp: The memory address of the function to compare to the values in array
 * Return: The index in array of the first value to match the criteria of cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
