#include "main.h"
#include <stdio.h>

/**
 * more_numbers -prints numbers to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}

		_putchar('\n');

		i++;
	}
}
