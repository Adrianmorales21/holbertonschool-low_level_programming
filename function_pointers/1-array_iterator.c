#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator-prints the elements of a array
 * @size:size of the array
 * @array:array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; 1 < size; i++)
	{
		action(array[i]);
	}
}
