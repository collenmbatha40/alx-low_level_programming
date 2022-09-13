#include "main.h"

/**
 * main - check the code
 *
 * function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return:0
*/
void print_alphabet(void)
{
	char _alpha = 'a';

	while(_alpha <= 'z')
	{
	_putchar("%c", _alpha);
	_alpha++;
	}
	_putchar('\n');
	return (0);
}
