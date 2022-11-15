#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes the dog struct
 * description: Initializes a dog struct based on parameters provided.
 * @d: a variable of type struct dog
 * @name: dog name 
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner) {
d->name = name;
d->age = age;
d->owner = owner;
}
