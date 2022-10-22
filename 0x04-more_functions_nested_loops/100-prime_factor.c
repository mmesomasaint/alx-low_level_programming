#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * description: Prints largest prime factor of a huge number
 * followed by a new line.
 * Return: 0 on success
 */

int main(void)
{
unsigned long num = 612852475143;
unsigned long divisor = 2;

while (divisor < num)
{
if (num % divisor == 0)
{
num /= divisor;
divisor = 2;
}
else
divisor++;
}
printf("%lu\n", num);
return (0);
}
