#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 *
 *@n: the number of variables
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int summatory = 0;
	unsigned int count;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (count = 0; count < n; count++)
		summatory += va_arg(arguments, int);
	va_end(arguments);
	return (summatory);
}
