#include "main.h"
/**
 * _strncat-copies string
 * @dest: destination string
 * @src: source string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		*p++;
	}

