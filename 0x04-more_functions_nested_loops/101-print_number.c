#include "holberton.h"
/**
 * print_number - function that prints an integer
 *@n: print the integer
 *
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
		print_number(num / 10);
	putchar((num % 10) + '0');
}
