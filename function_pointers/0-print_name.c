#include "function_pointers.h"
/**
 * print_name- calls the fucntion required to print name
 * @name:name to print
 * @f:pointer to the functions
 */
void print_name(char *name, void (*f)(char *))
{
	 f(name);
}
