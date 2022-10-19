#include "main.h"
/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 for true, 0 for false.
 */
int _islower(int c)
{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
