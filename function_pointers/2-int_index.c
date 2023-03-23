#include "function_pointers.h"
/**
 * int_index - return index 
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return (s);
	}
	return (-1);
}
