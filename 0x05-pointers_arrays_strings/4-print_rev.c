#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string being reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int _length = strlen(s);

	while (_length--)
	{
		_putchar(*(s + _length));
	}
	_putchar(10);
}
