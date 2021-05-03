#include "holberton.h"
/**
 * factorial - return the factorial of a number
 * @n: number
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
