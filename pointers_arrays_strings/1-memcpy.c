#include "main.h"
/**
 *_memcpy- cpies memory
 *@dest:input
 *@src:input
 *@n:input
 *Return:always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
