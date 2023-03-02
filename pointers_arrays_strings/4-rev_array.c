#include "main.h"
/**
 * reverse_array- reverses a array.
 * @a:input
 * @n:input
 */
void reverse_array(int *a, int n)
{
	int l;

	l = 0;
	
	while ( l < n && a[l] != '\0')
	{
		l++;
	}

	while ( a[l] != 0)
	{
		l--;
	}
}
