/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int t;
for (t = 48; t <= 57; t++)
{
putchar(t);
if (t < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
