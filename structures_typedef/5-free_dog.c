#include <stdlib.h>
#include "dog.h"
/**
 * free_dog-free memory allocated for dog
 * @d:memory to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
