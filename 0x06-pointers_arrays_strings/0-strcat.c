#include "holberton.h"

/**
 * _strcat - concats two integers
 * @dest: string 2
 * @src: string 1
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	y = 0;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	x++;
	dest[x] = '\0';
	return (dest);
}
