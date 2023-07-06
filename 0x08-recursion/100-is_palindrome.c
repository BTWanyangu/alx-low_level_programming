#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (*s != '\0')

	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end) /* Base case: substring is a palindrome */
		return (1);

	if (s[start] != s[end]) /* Characters don't match, not a palindrome */
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1)); /* call check next */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *
 * Description: This function checks if a string is a palindrome by calling
 *              the is_palindrome_recursive function with the start and end
 *              indices of the string. If the string is empty or the same
 *              forwards and backwards, it is considered a palindrome.
 */
int is_palindrome(char *s)
{
size_t len = _strlen(s);

	if (len == 0) /* Empty string is a palindrome */
		return (1);

	return (is_palindrome_recursive(s, 0, len - 1)); /* Check the strg */
}

