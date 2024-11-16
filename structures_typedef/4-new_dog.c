#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcpy - copy string from src to dest
 * @dest: char pointer
 * @src: char pointer
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * _strlen - get length of string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}


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

	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
