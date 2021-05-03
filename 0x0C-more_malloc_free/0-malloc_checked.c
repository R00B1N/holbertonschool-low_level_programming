#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size of the of the allocation
 * Return: void function
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == '\0')
		exit(98);
	return (s);
}
