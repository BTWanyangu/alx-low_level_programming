#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 *
 * Description: This function calculates the factorial of a given number
 *              using recursion. If n is less than 0, it returns -1 to
 *              indicate an error. The factorial of 0 is defined as 1.
 */
int factorial(int n)
{
	if (n < 0)  /* Check for negative number */
		return (-1);

	if (n == 0)  /* Base case: factorial of 0 is 1 */
		return (1);

	return ((n) * factorial(n - 1));  /* Recursive call to calculate factorial */
}

