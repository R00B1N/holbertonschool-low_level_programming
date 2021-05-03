#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - Here our function will return a pointer
 * @str: is the string have as the input and we want to find the size
 *
 * Return: Germ
 */

char *_strdup(char *str)
{
	int j;
	int d;
	char *Germ;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;
	Germ = malloc(sizeof(char) * (j + 1));

	if (Germ == 0)
		return (0);

	for (d = 0; d <= j; d++)
		Germ[d] = str[d];

	return (Germ);
}
