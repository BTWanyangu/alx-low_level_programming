#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Description: This function prints a string in reverse order
 *              using recursion. It first recursively calls itself
 *              with the remaining substring until the end of the string
 *              is reached, and then prints the current character.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string */
		return;
	_print_rev_recursion(s + 1);  /* Recursive call prints rest of the string */
	_putchar(*s);  /* Print current character */
}

