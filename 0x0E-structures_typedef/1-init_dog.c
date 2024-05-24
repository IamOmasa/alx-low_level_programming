#include "dog.h"

/**
 *init_dog - initialize struct dog
 *
 *@d: input ponter d to sturct dog
 *@name: dog name input
 *@age: dog age input
 *@owner: dog owner input
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
