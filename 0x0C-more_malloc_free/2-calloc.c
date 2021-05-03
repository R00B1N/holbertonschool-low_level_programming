#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - mallocs assigned memory and sets to zero
 *
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
