#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
int i;
char numbers[] = "0123456789";
for (i = 0; i <= 9; i++)
{
_putchar(numbers[i]);
}
_putchar('\n');
}
