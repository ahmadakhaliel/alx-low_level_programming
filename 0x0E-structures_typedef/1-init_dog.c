#include "dog.h"

/**
 * init_dog - dog - str. dog
 * @d: dog to init
 * @name: character data type
 * @age: character folat type
 * @owner: character data type
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
