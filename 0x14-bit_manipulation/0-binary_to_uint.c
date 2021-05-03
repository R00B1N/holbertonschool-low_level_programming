#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string with 0 and 1 to convert to decimal
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int pos;

	if (!b)
		return (0);
	for (pos = 0; b[pos]; pos++)
		if (b[pos] != '0' && b[pos] != '1')
			return (0);

	for (pos = pos - 1; pos >= 0; pos--)
	{
		if (b[pos] == '1')
			decimal += base;
		base *= 2;
	}
	return (decimal);
}
