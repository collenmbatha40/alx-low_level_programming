#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Program prints the alphabet in lowercase
 *
 * Return:0
*/
int main(void)
{
	char _alphabet;

	for (_alphabet = 'a' ; _alphabet <= 'z' ; _alphabet++;)
	{
		putchar(_alphabet);
	}
	putchar('\n');
	return (0);
}
