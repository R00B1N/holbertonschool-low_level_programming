#include <stdio.h>
/**
 * main - prints quantity of args
 * @argc: counter of argc
 * @argv: vector argument
 * Return: Always 0 success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
