#include "holberton.h"
/**
 * checksqr - check if number is the square root
 * @num: possible square
 * @root: the original number
 * Return: recursive function
 *
 */
int checksqr(int num, int root)
{
	if (num * num == root)
		return (num);
	if (num * num > root)
		return (-1);
	return (checksqr(num + 1, root));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: input number
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (checksqr(1, n));
}
