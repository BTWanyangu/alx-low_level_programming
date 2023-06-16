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
putchar(',');
putchar(' ');
putchar(i + '0');
}
putchar('\n');
return (0);
}
