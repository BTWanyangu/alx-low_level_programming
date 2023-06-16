#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int i;
putchar('0');
for (i = 1; i < 10; i++)
{
putchar((i + '0') % 10 + ',');
putchar(' ');
}
putchr('\n');
return (0);
}
