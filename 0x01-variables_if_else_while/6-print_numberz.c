#include <stdlib.h>
#include <stdio.h>
/**
 * main - starting point
 *
 * Program prints all base 10 integers with putchar function
 *
 * Return:0
*/
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar((n) + '0');
	}
	putchar('\n');
	return (0);
}
