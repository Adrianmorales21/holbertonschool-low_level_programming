#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s:strint to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}