#include "main.h"
#include <stdio.h>
/**
 *
 * print_to_98 - prints all numbers from standard input to 98
 *
 * @n - the beginning of the count.
 *
*/
void print_to_98(int n)
{
	if(n < 98)
	{
		while(n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while(n >= 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	return (0);
}
