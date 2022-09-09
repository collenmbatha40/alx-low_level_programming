#include <stdlib.h>
#include <stdio.h>

/**
 * main - starting point
 *
 * Program prints the alphabet in lower then upper case
 *
 * Return:0
 *
*/
int main(void)
{
	char _alpha;

	for (_alpha = 'a' ; _alpha <= 'z' ; _alpha++)
	{
		putchar(_alpha);
	}
	for (_alpha = 'A' ; _alpha <= 'Z' ; _alpha++)
	{
		putchar(_alpha);
	}
	putchar('\n');
	return (0);
}
