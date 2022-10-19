#include "main.h"
/**
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to signal end.
 * Description: PRints a multiplication table up to param
 * Return: Number matrix
 */
void print_times_table(int n)
{
int row, column, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = (row * column);
if (column == 0)
_putchar('0' + product);
else
{
_putchar(',');
_putchar(' ');
if (product <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9 && product < 100)
{
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else if (product >= 100)
{
_putchar('0' + (product / 100));
_putchar('0' + ((product / 10) % 10));
_putchar('0' + (product % 10));
}
}
}
_putchar('\n');
}
}
}
