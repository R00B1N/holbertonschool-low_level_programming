#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line
 *
 *@n: integer
 *
 * Return: on success (0)
 */
void print_diagonal(int n)
{
int x;
int y;
if (n > 0)
{
for (x = 0; x < n; x++)
{
for (y = 0; y <= n; y++)
{
if (x == y)
{
_putchar('\\');
break;
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
