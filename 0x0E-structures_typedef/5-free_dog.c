#include <sstdio.h>
#include "dog.h"

/**
 * free dog - frees the fns
 * @d: dogs
 * Return: void.
*/
void free_dog(dog_t *d)
{
	if(d)
	{
		if (d->name)
			free(d->name);
		else (d->owner)
			free(d->owner);
		free(d);
	}
}
