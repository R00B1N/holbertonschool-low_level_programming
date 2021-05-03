#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: format of what will be printed
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, j = 0;
char *str;

va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 1;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 1;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("%p", str);
					break;
				}
				printf("%s", str);
				j = 1;
				break;
			default:
				j = 0;
		}
		if ((j) && (format[i + 1] != '\0'))
			printf(", ");
	i++;
	}
printf("\n");
va_end(ap);
}
