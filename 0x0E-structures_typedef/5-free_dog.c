#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - function that free dog
 *@d: free struct pointer to dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
