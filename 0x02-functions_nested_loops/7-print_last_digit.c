#include "holberton.h"
/**
 *print_last_digit - function to determine last digit
 *@n: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
int x;
if (n >= 0)
{
x = n % 10;
}
else
{
x = -n % 10;
}
_putchar (x + '0');
return (x);
}
