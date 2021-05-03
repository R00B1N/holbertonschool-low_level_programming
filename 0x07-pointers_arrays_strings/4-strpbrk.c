#include "holberton.h"
/**
 * _strpbrk - function strpbrk
 * @s: pointer to the array
 * @accept:  pointer to substring
 * Return: the array s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (&s[a]);
			b++;
		}
		a++;
	}
	return (0);
}
