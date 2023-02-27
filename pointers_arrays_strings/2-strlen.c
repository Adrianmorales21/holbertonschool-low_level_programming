#include "main.h"
/**
 * _strlen- lenght of string
 * @s:string
 * Return: string lenght size
 */
int _strlen(char *s)
{
	int l;

	for (l = 0;  *s != '\0'; l++, s++)
		;

	return (l);
}
