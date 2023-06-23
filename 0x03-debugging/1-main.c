#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers in a loop and avoids infinite loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i + '0'); /* Print the numerical value of i */
		i++; /* Increment i to avoid infinite loop */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

