#include "main.h"
/**
 * print_triangle - prints rows
 * Description: ptints diagonals
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
int row, hashes, spaces;
if (size <= 10)
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
_putchar(' ');
for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
