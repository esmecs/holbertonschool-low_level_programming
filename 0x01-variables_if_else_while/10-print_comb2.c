/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int t;
int d;
for (t = 48; t <= 57; t++)
{
for (d = 48; d <= 57; d++)
{
putchar(t);
putchar(d);
if (t < 57 || d < 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
