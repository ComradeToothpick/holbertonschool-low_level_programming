#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the struct dog at the given memory address
 * @d: The memory address of the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name != NULL)
	{
		free((*d).name);
	}
	if ((*d).owner != NULL)
	{
		free((*d).owner);
	}
	free(d);
}
