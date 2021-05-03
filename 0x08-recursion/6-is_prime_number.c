#include "holberton.h"
/**
 * isprime - checks recursively the input from is_prime_number
 * @n: iterator
 * @root: number to check againt
 * Return: 1 if n is a prime 0 otherwise
 */
int isprime(int n, int root)
{
	if (n % root == 0 || n < 2)
		return (0);
	else if (root == (n - 1))
		return (1);
	else if (n > root)
		return (isprime(n, root + 1));
	return (1);
}
/**
 * is_prime_number - tells if number is prime
 * @n: input number
 * Return: 1 if the input integer is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (isprime(n, 2));
}
