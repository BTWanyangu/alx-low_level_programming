#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;
/* Skip leading whitespace */
while (s[i] == ' ')
i++;
/* Determine the sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/* Convert string to integer */
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
else
{
/* Stop converting if non-digit character is encountered */
break;
}
}
return (num *sign);
}

