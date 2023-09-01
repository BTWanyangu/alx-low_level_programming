#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 *
 * Description: This function recursively converts and prints a given
 * number in its binary representation without using arrays, malloc,
 * %, or / operators.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1); /* Right-shift n by 1 to get the next bit. */
_putchar((n & 1) + '0'); /* Use a bitwise AND to extract the least signif. */
}

