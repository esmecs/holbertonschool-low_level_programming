#include "holberton.h"
/**
 * jack_bauer - print hour day
 * Return: return a character
 */
void jack_bauer(void)
{
int x, y, s, m;
for (x = 48; x <= 50; x++)
{
for (y = 48; y <= 57; y++)
{
for (s = 48; s <= 53; s++)
{
for (m = 48; m <= 57; m++)
{
if (x < 50 || y <= 51)
{
_putchar (x);
_putchar (y);
_putchar (':');
_putchar (s);
_putchar (m);
_putchar ('\n');
}
}
}
}
}
}
