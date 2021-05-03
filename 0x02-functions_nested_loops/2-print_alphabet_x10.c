#include "holberton.h"
/**
* print_alphabet_x10 - lets to print 10 lines of alphabet
*
* Return: on success (0)
*/
void print_alphabet_x10(void)
{
char d;
int e = 0;
for (; e < 10; e++)
{
for (d = 'a';  d <= 'z'; d++)
{
_putchar(d);
}
_putchar('\n');
}
}
