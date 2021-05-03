#include "holberton.h"
/**
 * jack_bauer - Write a function that prints every minute of the day
 *
 * Return: print every minute from 00:00 to 23:49
 */
void jack_bauer(void)
{
	int hour = 0;
	int min;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
