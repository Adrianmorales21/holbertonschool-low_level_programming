#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog- creates new dog
 *@name:name to copy
 *@age:age to copy
 *@owner:owner to copy
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	nd->name = malloc(strlen(name + 1));
	nd->owner = malloc(strlen(owner + 1));
	if (nd == NULL)
	{
		free(nd);

		return (NULL);
	}
	if (nd->name == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	if (nd->owner == NULL)
	{
		free(nd->owner);
		free(nd);
		return (NULL);
	}
	nd->name = strdup(name);
	nd->owner = strdup(owner);
	nd->age = age;
	return (nd);
}
