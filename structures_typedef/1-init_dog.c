#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog at the givem address with the given
 * values
 * @d: The memory address of the struct
 * @name: The string to set the dogs name as
 * @age: The number to set the dogs age as
 * @owner: The string to set the dogs owner as
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
