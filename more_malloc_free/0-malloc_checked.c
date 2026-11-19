#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates b bytes and checks that it was allocated
 * successfuly
 * @b: The number of bytes to malloc
 * Return: A Void pointer to the memory if successfuly allocated,
 * or gives exit code 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
