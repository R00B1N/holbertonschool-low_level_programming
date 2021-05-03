#include "holberton.h"
/**
 * _islower - check for lowercases character
 * @c: char
 * Return: on succes (0)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
