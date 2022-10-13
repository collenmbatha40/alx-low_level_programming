#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of function parameters
 * Return: sum of arguments, else return
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum = 0;
	va_list list_a;

	if (n == 0)
	{
		return (0);
	}

	va_start(list_a, n);

	for (num = 0; num < n; num++)
	{
		sum += va_arg(list_a, int);
	}
	va_end(list_a);

	return (sum);
}
