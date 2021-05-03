#include "holberton.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: integer given
 *@index: index of the integer in binary
 *Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (n == 0 && index > 0)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
