#include "holberton.h"

/**
 *_strncpy - function that copies a string
 *@dest: copy of string
 *@src: original string
 *@n: variable
 *Return: copy of orignal string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
