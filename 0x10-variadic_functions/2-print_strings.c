#include "variadic_functions.h"
/**
 * print_strings - prints strings with a separator
 * @separator: string that separates the arguments
 * @n: number of arguments
 * Return: void.. by gd
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list args;
	char *s;

	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		s = va_arg(args, char *);
		printf("%s", s != '\0' ? s : "(nil)");

		if (c != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
