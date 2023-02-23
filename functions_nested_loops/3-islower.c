#include "main.h"
/**
 *_islower- 1 if c is lower case
 *@c: character on ascii
 * Return:1 if lower case (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
