#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if > 0, 0 if n is zero, -1 if < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (0);
	}
	else
	{
		putchar(48);
		return (-1);
	}
}

