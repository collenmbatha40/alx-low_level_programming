#include "main.h"
#include <stdlib>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: lements in array
 * @size: byte size of elements
 * Return: pointer to allocated memory, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointr;
	unsigned int indx;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointr = malloc(nmemb * size);
	if (pointr == NULL)
	{
		return (NULL);
	}

	for (indx = 0; indx < nmemb * size; indx++)
		pointr[indx] = 0;

	return (pointr);
}
