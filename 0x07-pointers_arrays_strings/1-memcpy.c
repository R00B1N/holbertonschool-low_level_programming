#include "holberton.h"
/**
 * _memcpy - function memcpy
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: n times
 * Return: return the array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
