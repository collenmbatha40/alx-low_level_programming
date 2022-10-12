#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return:  index of the first element, else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (n = 0; n < size; n++)
		{
			cmp(array[n]);
			if (cmp(array[n]) > 0)
			{
				res = n;
				break;
			}
			if ((cmp(array[n]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
