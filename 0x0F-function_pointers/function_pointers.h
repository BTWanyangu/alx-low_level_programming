#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - Prints a name using the provided function.
 * @name: Name of the person.
 * @f: Function pointer to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

