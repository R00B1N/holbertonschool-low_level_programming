#include "holberton.h"
/**
 * print_times_table - prints the n times table
 * a: first number
 * b: second number
 * @n: the number of the times table
 * r: the multiplication result
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0;
	int b = 0;
	int counter = 0;
	int m;

	if ((n >= 0) && (n <= 15))
	{
		while (a <= n)
		{
			while (b <= n)
			{
				m = a * b;
				if (m > 99)
				{
					_putchar((m / 100) + '0');
					m = m % 100;
					if (m < 10)
						_putchar('0');
				}
				if (m > 9)
					_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				if (counter < n)
				{
					_putchar(',');
					_putchar(' ');
					if (a * (b + 1) < 100)
						_putchar(' ');
					if (a * (b + 1) < 10)
						_putchar(' ');
				}
				counter++;
				b++;
			}
			_putchar('\n');
			b = 0;
			counter = 0;
			a++;
		}
	}
}
