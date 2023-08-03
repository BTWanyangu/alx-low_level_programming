#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *)&test_value;

	/* If the first byte is non-zero, the system is little-endian */
	return (*byte_pointer);
}

