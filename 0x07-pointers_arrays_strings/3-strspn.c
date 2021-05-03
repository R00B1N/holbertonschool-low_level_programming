#include "holberton.h"
/**
 * _strspn - function strspn
 * @s: pointer to the array
 * @accept: substring
 * Return: the array s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, a, b;

	len = 0;
	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (a != len)
			break;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				len = len + 1;
			}
		}
	}
	return (len);
}
