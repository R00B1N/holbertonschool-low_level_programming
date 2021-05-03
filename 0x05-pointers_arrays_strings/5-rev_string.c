#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: characters
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char a;
	char b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
	}
}
