#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates new instance of dog struct
 * @name: name string
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char*));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char*));
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
