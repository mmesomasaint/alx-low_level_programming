#include "main.h"
/**
 * _isdigit - checks if a chararcter is digit
 * description: returns true if character is digit and false if not
 * @c: carrier varable
 * Return: 1 for true, 0 for false
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
