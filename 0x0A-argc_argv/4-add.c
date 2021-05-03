#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * checkdigits - function to check all the digits in the string
 * @s: string to evaluate
 * Return: 0 if they are not digits and 1 if they are
 */
int checkdigits(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (!isdigit(s[a]))
			return (0);
	}
	return (1);
}
/**
 * main - prints the product of two numbers
 * @argc: counter of argc
 * @argv: vector argument
 * Return: Always 0 success and 1 if there is an error
 */
int main(int argc, char **argv)
{
	unsigned int res = 0;
	int c = 1;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (; c < argc; c++)
	{
		if (checkdigits(argv[c]))
			res += atoi(argv[c]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
