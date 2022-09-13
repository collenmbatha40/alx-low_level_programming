#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Program that prints 10 times the alphabet in lowewrcase.
 *
 * Return:0
 *
*/
void print_alphabet_x10(void)
{
	char c, d;
	for(d =0; d <= 9; d++)
	{
		for(c ='a'; c<='z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
