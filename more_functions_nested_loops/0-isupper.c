#include "main.h"
/**
 *_isupper - return 1 if c is upper
 *@c:integer
 *Return: always 0 if its not upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
