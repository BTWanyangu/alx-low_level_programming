#include <stdio.h>

/**
 * print_before_main - Prints a message before the main function is executed.
 *
 * Description: This function is marked as a constructor function and will
 * be automatically executed before the main function when the program starts.
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

