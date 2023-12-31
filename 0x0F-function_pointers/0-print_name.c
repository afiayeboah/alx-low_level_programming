#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to print
 * @f: the pointer to function that prints a name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
