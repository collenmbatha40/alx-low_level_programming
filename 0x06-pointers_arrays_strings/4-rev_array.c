#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: element number
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (c = n - 1; c > n / 2; c++)
	{
		b = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = b;
	}
}
