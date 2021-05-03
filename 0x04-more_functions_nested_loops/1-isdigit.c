#include "holberton.h"

/**
 *_isdigit - check for digit character
 *@c: integer
 *
 *Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
