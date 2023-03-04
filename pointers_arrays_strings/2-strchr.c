#include "main.h"
/**
 * _strchr - locates string
 * @s: string
 * @c: character to locate\
 *Return: s or null
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			 return (s + a);
	}
	return ('\0');
}
