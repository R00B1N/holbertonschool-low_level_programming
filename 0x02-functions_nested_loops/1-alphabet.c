#include "holberton.h"
/**
* print_alphabet - check the code for Holberton School students
*
* Return: on success (0)
*/
void print_alphabet(void)
{
char d;
d = 'a';
while (d <= 'z')
{
_putchar(d);
d++;
}
_putchar('\n');
}
