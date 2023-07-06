#include "main.h"

/**
 * sqrt_recursive - Calculates the square root of a number recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if it doesn't have an exact square root.
 *
 * Description: This function recursively calculates the square root of a given
 *              number by checking if the square of the current guess is equal
 *              to the number. If the guess is too large, it returns -1 to
 *              indicate that there is no exact square root. Otherwise, it
 *              continues to recursively search for the square root.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)  /* Base case: found exact square root */
		return (guess);
	else if (guess * guess > n)  /* Base case: no exact square root */
		return (-1);

	return (sqrt_recursive(n, guess + 1));  /* Recursive callcontinusearch */
}

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if n is negative.
 *
 * Description: This function calculates the square root of a given number
 *              using recursion. If the number is negative, it returns -1.
 *              Otherwise, it calls the sqrt_recursive function to search
 *              for the square root starting with an initial guess of 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Check for negative number */
		return (-1);

	return (sqrt_recursive(n, 0));  /* Startsearchforroot with initial guess0 */
}

