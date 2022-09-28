#include "main.h"
/**
 * prime_num - checks if num is prime
 * @num: input integer
 * @res: starting number
 * Return: 1 if num is prime.
 */
int prime_num(int num, int res)
{
	if (res <= 1)
	{
		return (1);
	}
	else if (num % res == 0)
	{
		return (0);
	}
	return (prime_num(num, res - 1));
}

/**
 * is_prime_number - returns 1 if input is a prime number
 * @n: input integer
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	int res = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, res));
}
