#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 * @size: array size
 * @c: initializing char to array
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0, n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
