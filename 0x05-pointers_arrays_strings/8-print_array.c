#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the elements of an array
 *@a: array to be printed
 *@n: number of elements in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n -1));
		{
			printf(", ");
		}
	}
	printf('\n');
}
