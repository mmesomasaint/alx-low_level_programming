#include "main.h"
/**
 * _isupper - checks is a character uppercase
 * description: returns true if character is uppercase and false if not.
 * @c: carrier integer variable
 * Return: 1 for true, 0 for false
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
