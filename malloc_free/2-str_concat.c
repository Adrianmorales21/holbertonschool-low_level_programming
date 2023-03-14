#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat- concatenates 2 strings
 * @s1:first string to concatenate
 * @s2:second string to concatenate
 * Return: pointer with the strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int l1, l2;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	l1 = strlen(s1);
	l2 = strlen(s2);
	conc = malloc(l1 + l2 + 1);
	if (conc == NULL)
		return (NULL);
	strcpy(conc, s1);
	strcat(conc, s2);
	return (conc);
}
