#include <stdlib.h>
#include "dog.h"
/**
 * free_dog-free memory allocated for dog
 * @d:memory to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
