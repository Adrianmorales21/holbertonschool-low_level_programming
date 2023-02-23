#include "main.h"
/**
 * main-alphabet on lower case X 10
 * 
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
