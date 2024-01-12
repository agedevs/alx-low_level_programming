#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes the structure of the dogs
 * @d: Pointer that holds the address
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: Owner of the dog
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
