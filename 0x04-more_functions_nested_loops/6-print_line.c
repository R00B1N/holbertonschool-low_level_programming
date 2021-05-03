#include "holberton.h"
/**
 * print_line - function that draws a new line
 *
 *@n: integer
 *
 * Return: on success (0)
 */
void print_line(int n)
{
int a;
if (n < 0)
{
for (x = 0; x < n; x++)
{
_putchar('_');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
}
