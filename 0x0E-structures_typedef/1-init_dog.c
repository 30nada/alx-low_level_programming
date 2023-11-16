#include "dog.h"

/**
 * init_dog - initialize a dog structures
 * @d: a dog structures
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
