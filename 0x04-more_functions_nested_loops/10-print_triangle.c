#include "main.h"

/**
 * print_triangle - check for a digit
 * description: prints a triangle
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
int height;
int width;
int draw;

if (size <= 0)
_putchar('\n');

for (height = 1; height <= size; height++)
{
for (width = 1; width <= (size - height); width++)
_putchar(' ');

for (draw = 1; draw <= height; draw++)
_putchar('#');

_putchar('\n');
}
}