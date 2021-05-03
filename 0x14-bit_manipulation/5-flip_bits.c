#include "holberton.h"
#define NUM_BITS_INT (sizeof(unsigned long int) * 8)
/**
 *flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *@n: integer
 *@m: integer to compare
 *Return: numbers of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int a = 0, b = 0, count = 0;

	for (i = NUM_BITS_INT - 1; i >= 0; i--)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;
		if (a != b)
			count++;
	}
	return (count);
}
