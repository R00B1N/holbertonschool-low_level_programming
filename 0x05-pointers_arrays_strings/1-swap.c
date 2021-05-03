#include "holberton.h"

/**
 * swap_int - swaps two integer values
 *@a: pointer to an int
 *@b: pointer to an int
 *
 */

void swap_int(int *a, int *b)

{
	int c = *a;

	*a = *b;
	*b = c;
}
