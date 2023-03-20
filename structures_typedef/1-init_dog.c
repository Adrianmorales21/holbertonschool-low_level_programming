#include "dog.h"
#include <stdlib.h>
/*
 * init_dog- initializes the doc struct
 * @d: pointer to in initialize
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
