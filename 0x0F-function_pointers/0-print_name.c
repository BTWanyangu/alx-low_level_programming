#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function.
 * @name: Name of the person.
 * @f: Function pointer to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

