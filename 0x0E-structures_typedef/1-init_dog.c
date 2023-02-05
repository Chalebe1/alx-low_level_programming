#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialize a variable.
 * @d: a dog to be initialize
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 *
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
