#include "holberton.h"
/**
 * _memset - function memset
 * @s: pointer to array
 * @b: char
 * @n: n times
 * Return: return the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
