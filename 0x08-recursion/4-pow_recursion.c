#include "holberton.h"
/**
 * _pow_recursion - return the power of x number y times
 * @x: number
 * @y: power
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
