#include <stdio.h>

/**
 * main - This program prints the alphabet in reverse.
 *
 * Return: 0.
 */

int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
