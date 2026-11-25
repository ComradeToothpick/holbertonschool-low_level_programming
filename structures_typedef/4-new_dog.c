#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates and initializes a new dog, returning it's memory address
 * @name: The string to save as the new dogs name
 * @age: The age to initialize the new dog with
 * @owner: The string to save as the new dogs owner
 * Return: A pointer to the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || name == NULL || owner == NULL)
	{
		if (new_dog != NULL)
			free(new_dog);
		return (NULL);
	}
	(*new_dog).name = _strcpy(name);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).age = age;
	(*new_dog).owner = _strcpy(owner);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}

/**
 * _strcpy - copies the string from the given address to a new address
 * @str: The string to copy
 * Return: Pointer to the copied string
 */
char *_strcpy(char *str)
{
	char *copy, c;
	int i, length;

	i = 0;
	length = 0;
	c = '0';
	while (c != 0)
	{
		c = *(str + i);
		length++;
		i++;
	}
	copy = malloc(sizeof(char) * length);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(copy + i) = *(str + i);
		i++;
	}
	return (copy);
}
