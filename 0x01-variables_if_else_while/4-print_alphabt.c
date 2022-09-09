#include <stdio.h>
/**
 * main - entry point
 *
 * Program prints the alphabet in lowercase except q and e
 *
 * Return:0
 *
*/
int main(void)
{
	char _alpha;

	for (_alpha = 'a' ; _alpha <= 'z' ; _alpha++)
	{
		if (_alpha != 'q' && _alpha != 'e')
		{
			putchar(_alpha);
			putchar('\n');
		}
	}
	return (0);
}
