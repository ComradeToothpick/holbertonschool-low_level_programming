#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * and returns a pointer to the allocated memory. The memory is set to 0
 * @nmemb: The number of elements in the array
 * @size: The number of bytes each element requires
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if _calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *output;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	output = malloc(nmemb * size);
	if (output == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		*(((char *) output) + i) = 0;
		i++;
	}
	return (output);
}
