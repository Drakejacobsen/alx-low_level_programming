#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name;
		d->age = age;
		d->owner = owner;
	}
}
