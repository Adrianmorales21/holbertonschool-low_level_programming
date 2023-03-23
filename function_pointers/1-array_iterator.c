#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem 
 * @array: array
 * @size: size of the array
 * @action: pointer 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}

