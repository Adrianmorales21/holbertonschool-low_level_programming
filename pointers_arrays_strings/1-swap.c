#include "main.h"
/**
 * swap_int- swaps values of integers
 * @a: int to swap
 * @b:int to swap
 */
void swap_int(int *a, int *b)
{
	 int s;

	s = *b;
	*b = *a;
	*a = s;

}
