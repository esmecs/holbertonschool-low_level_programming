#include "holberton.h"
/**
 * _isalpha - return a value of  alphabet
 * Return: return character
 *@c: firt character ot the value
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
