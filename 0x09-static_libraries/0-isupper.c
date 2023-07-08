#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 *
 * Description: This function checks if the given character is an uppercase 
 *              It returns 1 if the character is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

