#include "holberton.h"
/**
* rot13 - function to encode to rot13
* @s: array
* Return: the array encoded
 */
char *rot13(char *s)
{
	char chain1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char chain2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chain1[j] != '\0'; j++)
		{
			if (s[i] == chain1[j])
			{
				s[i] = chain2[j];
				break;
			}
		}
	}
	return (s);
}
