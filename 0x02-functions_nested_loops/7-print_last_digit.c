#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The number to extract the last digit from.
 *
 * Return: The last digit of the given number.
 */
int print_last_digit(int number)
{
int last_digit;
last_digit = number % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
}

