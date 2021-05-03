#include "holberton.h"

/**
 *leet - encodes a string
 *@s: string
 *Return: encoded string
 */

char *leet(char *s)
{
	int i, j, k;
	char letra[] = "oOlLeEaAtT";
	char replace[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (letra[j] != '\0')
		{
			if (s[i] == letra[j])
			{
				k = j;
				s[i] = replace[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
