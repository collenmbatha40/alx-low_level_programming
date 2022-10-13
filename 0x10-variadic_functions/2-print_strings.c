#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings in the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_c;
	unsigned int num;
	char *s;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list_c, n);

	for (num = 0; num < n; num++)
	{
		s = va_arg(list_c, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (num < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_c);
}
