#include "main.h"

/**
 * is_prime_recursive - Checks if a number is prime recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 *
 * Description: This function recursively checks if a number is prime
 *              by checking if it is divisible by any number from 2
 *              up to the square root of the number. If the number is
 *              divisible by any of these numbers, it is not prime.
 *              Otherwise, it is prime.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)  /*Base case: numbers less than 2 are not*/
		return (0);

	if (divisor * divisor > n) /* Base case: reached square root, number */
		return (1);

	if (n % divisor == 0)  /*Number is divisible by divisor, not prime */
		return (0);

	return (is_prime_recursive(n, divisor + 1));  /* Recure call to divis*/
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 *
 * Description: This function checks if a number is prime by calling
 *              the is_prime_recursive function with an initial divisor
 *              of 2. It handles the case where n is less than 2, which
 *              is not considered prime.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));  /* start checking divisi divis*/
}
