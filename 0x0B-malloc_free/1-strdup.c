#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be used as a parameter
 * Return: pointer to copied string or NULL if it is an error
 */
char *_strdup(char *str)
{
	int l; i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy = malloc(sizeof(char) * (l + 1));
		l++;
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[l] = '\0';
	
	return (copy);
}
