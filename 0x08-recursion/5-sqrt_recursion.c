#include "main.h"
/**
 * square_root - calculates the square root of a number
 * @a: given number
 * @b: squared number
 * Return: square root of a
 */
int square_root(int n, int a)
{
	if (n * n == a)
	{
		return (n);
	}
	else if (n > a / 2)
	{
		return (-1);
	}
	return (square_root(n + 1, a));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number being checked
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (-1);
	}
	return (square_root(0,  n));
}
