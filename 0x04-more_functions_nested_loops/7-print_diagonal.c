#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: function argument
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (a == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
