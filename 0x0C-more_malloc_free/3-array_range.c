#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: the smallest number in the array
 * @max: the biggest number in the array
 * Return: the array of integers
 */
int *array_range(int min, int max)
{
	int *p, c;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (0);
	for (c = 0; min <= max; min++, c++)
		p[c] = min;
	return (p);
}
