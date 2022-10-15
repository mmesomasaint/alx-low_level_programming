#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
