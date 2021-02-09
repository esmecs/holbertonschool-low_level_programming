#include "holberton.h"
/**
 * print_sign - Return a number depends of the sign
 * @n: The first character
 *
 * Return: return a value
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
