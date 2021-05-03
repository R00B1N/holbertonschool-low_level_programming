#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: variable
 *Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
