#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - executes a function on each element of an array
 *@array: array to act on
 *@size: size of the array
 *@action: function pointer to a function to be used on array
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (array == NULL || action == NULL)
		return;

	for ( ; c < size; c++)
		(*action)(array[c]);
}
