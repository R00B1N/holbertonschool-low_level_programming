#include <stdio.h>
#include "holberton.h"

/**
 * main - let's check the code
 * in this program, we'll call the functions: _strcat and _strlen
 * Return 0 on success
 */
int main(void)
{
	char name[15] = "Blackster";

	printf("\nWe'll concatenate the name with the last name, using the function _strcat\n");
	printf("name + last name = %s\n", _strcat(name, "Hack"));
	printf("\nNow, we'll use the function _strlen\n\nthis is the length of \"Blackster\" : %d characters\n", _strlen("Blackster"));
	printf("this is the length of \"Hack\" : %d characters\n\n", _strlen("Hack"));
	return (0);
}
