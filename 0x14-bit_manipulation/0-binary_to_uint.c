#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			bit = b[i] - '0'; /* Convert char to int (0 or 1) */
			result = (result << 1) | bit; /* Shift result left and add new bit */
			i++;
		}
		else
		{
			return (0); /* Invalid character found */
		}
	}

	return (result);
}

