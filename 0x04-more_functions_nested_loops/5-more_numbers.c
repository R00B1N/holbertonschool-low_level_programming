#include "holberton.h"

/**
 *more_numbers - print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int c;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}


}
