#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - str. dog
 * @name: character data type
 * @age: character folat type
 * @owner: character data type
 * Description: firts structure created by me
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
