#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Description: This function prints an integer to the standard output
 *              using only the _putchar function.
 */
void print_number(int n)
{
	int divisor = 1;
	int num_digits = 0;
	int i, digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
		num_digits++;
	}

	for (i = 0; i <= num_digits; i++)
	{
		digit = (n / divisor) % 10;
		_putchar('0' + digit);
		divisor /= 10;
	}
}

