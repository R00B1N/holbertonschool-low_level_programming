#include "holberton.h"
/**
 * _strstr - function strstr
 * @haystack: pointer to the array
 * @needle:  pointer to substring
 * Return: the array s
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	for (; haystack[a] != '\0'; haystack++)
	{
		for (a = 0; haystack[a] == needle[a]; a++)
		{
		}
		if (!needle[a])
			return (haystack);
	}
	return (0);
}
