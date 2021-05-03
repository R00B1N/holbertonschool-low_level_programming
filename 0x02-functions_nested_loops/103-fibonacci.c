#include <stdio.h>
#include <stdlib.h>
/**
 * main - that finds and prints the sum of the even-valued Fibonacci numbers
 * whose values do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, f, a, evnum = 0;

	for (a = 1; a <= 30; a++)
	{
		f = first + second;
		if ((f % 2) == 0)
			evnum += f;
		first = second;
		second = f;
	}

	evnum += 2;
	printf("%lu\n", evnum);
	return (0);
}
