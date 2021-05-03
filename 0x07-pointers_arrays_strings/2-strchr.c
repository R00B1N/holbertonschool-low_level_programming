#include "holberton.h"
/**
 * _strchr - function strchr
 * @s: pointer to the array
 * @c: char
 * Return: the array s
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			break;
		a++;
	}
	if (s[a] == c)
		return (&s[a]);
	return (0);
}
