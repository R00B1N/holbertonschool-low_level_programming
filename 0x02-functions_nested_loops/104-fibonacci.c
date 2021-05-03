#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long frp1, frp2, ar1, n1 = 1, n2 = 2;
	int a, b, ar2, secp1, secp2;

	for (a = 1; a <= 90; a++)
	{
		if (a == 1)
			printf("1, 2, ");
		ar1 = (n1 + n2);
		printf("%lu, ", ar1);
		n1 = n2;
		n2 = ar1;
	}
	frp1 = n1 / 100;
	frp2 = n2 / 100;
	secp1 = n1 % 100;
	secp2 = n2 % 100;
	for (b = 1; b <= 6; b++)
	{
		ar1 = frp1 + frp2;
		ar2 = secp1 + secp2;
		if (ar2 > 99)
		{
			ar1 += 1;
			ar2 = ar2 % 100;
			if (ar2 < 10)
				printf("%lu0%d", ar1, ar2);
		}
		if (ar2 >= 10)
			printf("%lu%d", ar1, ar2);
		if (b < 6)
			printf(", ");
		frp1 = frp2;
		frp2 = ar1;
		secp1 = secp2;
		secp2 = ar2;
	}
	printf("\n");
	return (0);
}
