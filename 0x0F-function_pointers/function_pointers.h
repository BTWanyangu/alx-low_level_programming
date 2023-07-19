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

#include <stddef.h>

void print_elem(int elem);
void print_elem_hex(int elem);

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */

