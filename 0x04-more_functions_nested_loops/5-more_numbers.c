#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, repeated 10 times.
 */
void more_numbers(void)
{
int i, j;
char numbers[] = "01234567891011121314\n";
for (i = 0; i < 10; i++)
{
for (j = 0; j < 17; j++)
{
if (numbers[j] != '\0')
_putchar(numbers[j]);
}
}
}

