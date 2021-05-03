#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the product of two numbers
 * @argc: counter of argc
 * @argv: vector argument
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	int res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
