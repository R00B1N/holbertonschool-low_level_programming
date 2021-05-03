#include "holberton.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: character pointer
 * @src: character source
 * Return: the pointer to des
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
