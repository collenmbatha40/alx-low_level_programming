#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string pointer
 * Return: string length
 */
int _strlen(char *s)
{
	int _length;

	for (*s != '\0'; s++)
	{
		_length += 1;
	}
	return (_length);
}
