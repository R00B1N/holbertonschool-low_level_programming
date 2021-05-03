#include "holberton.h"

/**
 *reverse_array - reverses content of an array
 *@n: number of elements in the array
 *@a: array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = a + n - 1;

	while (first < last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
	while (*a != '\0')
	{
		a++;
	}
}
