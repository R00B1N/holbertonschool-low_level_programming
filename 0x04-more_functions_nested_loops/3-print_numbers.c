#include "holberton.h"
/**
 * print_numbers - numbers 0-9
 * Return: numbers
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
