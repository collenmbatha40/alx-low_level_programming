#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_b;
	unsigned int num;

	va_start(list_b, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(list_b, int));
		if (separator && num < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_b);
}
