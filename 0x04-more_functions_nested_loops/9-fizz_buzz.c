#include <stdio.h>

/**
 * main - fizz buzz code
 * description: prints numbers from 0 - 100 and fizz and fizz buzz for some
 * multiples
 * Return: void
 */

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
if (i != 100)
{
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
