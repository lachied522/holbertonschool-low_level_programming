#ifndef DOG
#define DOG

/**
 * struct dog - dog
 * @name: name string
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * init_dog - initialise a variable of type dog
 * @d: pointer to dog struct
 * @name: name string
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
