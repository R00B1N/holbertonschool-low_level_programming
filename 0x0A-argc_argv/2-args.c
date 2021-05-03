#include <stdio.h>
/**
 * main - prints all the args
 * @argc: counter of argc
 * @argv: vector argument
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	int c = 0;

	while (c < argc)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
