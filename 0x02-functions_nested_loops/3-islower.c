#include "main.h"
/**
 * _islower - lowercase alphabet
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);  // lowercase character
}
else
{
return (0);  // not a lowercase character
}
}
