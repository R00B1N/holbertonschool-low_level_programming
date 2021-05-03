#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: unsigned integer
 * @c: character
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
