#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string being run
 * Return: nothing
 */
void puts2(char *str)
{
	int s = 0;

	for (; str[s] != '\0'; s++)
	{
		if ((s % 2) == 0)
		{
			_putchar(str[s]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}

