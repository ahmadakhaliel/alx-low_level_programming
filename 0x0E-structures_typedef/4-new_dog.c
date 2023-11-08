#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

struct dog {
    char *name;
    float age;
    char *owner;
};

struct dog *new_dog(char *name, float age, char *owner) 

{
    struct dog *newDog = malloc(sizeof(struct dog));
    if (newDog == NULL) 
    {
        return (NULL); 
    }

    newDog->name = malloc(strlen(name) + 1);
    newDog->owner = malloc(strlen(owner) + 1);
    if (newDog->name == NULL || newDog->owner == NULL) 
    {
        free(newDog->name);
        free(newDog->owner);
        free(newDog);
        return (NULL); 
   ;
}
