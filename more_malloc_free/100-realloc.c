#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Re-allocates memory at the address ptr by first freeing it, then
 * mallocing for the new size. Data is copied from the old address to the new
 * address, up to the minimum of old_size or new_size bytes
 * @ptr: The memory address of the data to be freed
 * @old_size: The number of bytes that used to be assigned to ptr
 * @new_size: The new number of bytes to be assigned to ptr
 * Return: The pointer to the newly re-allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	i = 0;
	while (i < old_size && i < new_size)
	{
		*(((char *)new_ptr) + i) = *(((char *)ptr) + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
