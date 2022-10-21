#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * Description: accepts 3 given numbers and returns the largest of them
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else if (c >= a && c >= b)
{
largest = c;
}
else
{
largest = a;
}

return (largest);
}
