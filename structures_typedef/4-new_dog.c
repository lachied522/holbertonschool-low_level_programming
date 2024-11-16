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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
