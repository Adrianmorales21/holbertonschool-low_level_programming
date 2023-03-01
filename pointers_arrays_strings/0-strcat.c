#include "main.h"
/**
 * _strcat-concatebates 2 string
 * @src: first string
 * @dest: second string
 * Return: always src
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = *src;

	for (j = 0; dest[j] != '\0'; i++, j++)
	{
		src[i] = dest[j];
	}
	src[i] = '\0';

	return (src);
}
