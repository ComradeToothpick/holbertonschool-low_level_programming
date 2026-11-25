#ifndef DOG_H_
#define DOG_H_

typedef struct dog dog;
/**
 * struct dog - A struct the contains information about a dog
 * @name: Name of the dog
 * @age: The age in years of the dog
 * @owner: The name of the owner of the dog
 *
 * Description: This struct contains the name, age, and owner name of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *str);
void free_dog(dog_t *d);

#endif
