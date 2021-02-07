/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
char t;
char b;
for (t = 'a'; t <= 'z'; t++)
{
putchar(t);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
