#include <stdio.h>
/**
 * main - prints the program name
 * @argc: counter of argc
 * @argv: vector argument
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
