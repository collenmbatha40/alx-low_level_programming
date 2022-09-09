#include <stdio.h>

/**
 * main - starting point
 *
 * Program prints lowercase alphabet in reverse
 *
 * Return:0
 *
*/
int main(void)
{
	char _alpha;

	for (_alpha = 'z'; _alpha >= 'a'; _alpha--)
	{
		putchar(_alpha);
	}
	putchar('\n');
	return (0);
}
