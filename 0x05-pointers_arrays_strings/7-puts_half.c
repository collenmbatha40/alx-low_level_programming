#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string being printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = ((length - 1) / 2); i < length; i++)

	{
		_putchar(*(str + i));
	}
	_putchar(10);
}

/**
 * _strlen - prints the length of a string
 * @s: string pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int _length = 0;

	while (*(s + _length) != '\0')
	{
		_length++;
	}
	return (_length);
}
