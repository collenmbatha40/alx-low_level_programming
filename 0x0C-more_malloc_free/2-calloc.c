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
	char *pntr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pntr = malloc(nmemb * size);
	if (pntr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
	{
		pntr[n] = 0;
	}
	return (pntr);
}
