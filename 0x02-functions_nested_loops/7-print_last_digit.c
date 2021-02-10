#include "holberton.h"
/**
 * print_last_digit - print the  last digit
 * @x:inicial value
 * Return: return a value
 */
int print_last_digit(int x)
{
if (x < 0)
{
x = -(x % 10);
_putchar (x + '0');
}
else
{
x = x % 10;
_putchar (x + '0');
}
return (x);
}
