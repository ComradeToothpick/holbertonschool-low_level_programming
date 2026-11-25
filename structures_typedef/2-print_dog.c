#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of the struct dog at the given memory
 * address
 * @d: The memory address of the dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if ((*d).name == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("%s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: ");
	if ((*d).owner == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("%s\n", (*d).owner);
}
