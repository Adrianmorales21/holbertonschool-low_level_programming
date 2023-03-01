#include "main.h"
/**
 * _strcat-concatebates 2 string
 * @src: first string
 * @dest: second string
 * Return: always src
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p++ = '\0';


	return (dest);
}
