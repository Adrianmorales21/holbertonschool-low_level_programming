#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup- duplicates a string
 * @str: string to duplicate
 * Returns: pointer with duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int c, l;
	
	if (str == NULL)
		return (NULL);
	l = strlen(str + 1);
	dup = malloc(l);
	if (dup == NULL)
		return (NULL);
	for (c = 0; c < l; c++)
		dup[c] = str[c];
	return (dup);
}
