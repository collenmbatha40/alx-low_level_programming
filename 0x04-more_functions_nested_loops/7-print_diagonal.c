#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: function argument
 * Return: void
 */

void print_diagonal(int n)
{
	int row, spaces;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (spaces = 0; spaces < row; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (row == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
