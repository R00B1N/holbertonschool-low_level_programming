#include "holberton.h"

/**
 * main - main function.
 *
 * Description: This program finds and prints the largest prime
 * factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long num;
	long maxPrime, oddPrime;

	num = 612852475143;
	maxPrime = 0;
	oddPrime = 3;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}
	while (num  != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num /= oddPrime;
		}
		oddPrime += 2;
	}
	printf("%ld\n", maxPrime);
	return (0);
}
