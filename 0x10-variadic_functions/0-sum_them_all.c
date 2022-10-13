#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of function parameters
 * Return: sum of arguments, else return
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, num;
	va_list list_a;

	sum = 0;
	if (num == 0)
	{
		return (0);
	}
	va_start(list_a, num);

	for (num = 0; num < n; num++)
	{
		sum += va_arg(list_a);
	}
	va_end(list_a);

	return (sum);
}
