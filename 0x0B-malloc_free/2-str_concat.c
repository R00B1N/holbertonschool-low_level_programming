#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check the length of a string
 * @str: pointer type char
 * Return: The program will return the length of a string
 **/
int  _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 00; i++)
	{
	}
	return (i);
}
/**
 * str_concat - This funcion will concatenate two strings coded by gd
 * @s1: String 1
 * @s2: String 2
 * Return: Result of concatenate s1, s2 and null terminated
 **/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len_s1, len_s2, m, i, o;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	ptr = malloc(((len_s1) + (len_s2) + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < len_s1; m++)
	{
		ptr[m] = s1[m];
	}
	for (i = len_s1, o = 0; o <= len_s2; i++, o++)
	{
		ptr[i] = s2[o];
	}
	return (ptr);
}
