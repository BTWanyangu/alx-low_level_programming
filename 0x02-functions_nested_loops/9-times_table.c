#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
int x, y, z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar(z + '0');
}
_putchar('\n');
}
}

