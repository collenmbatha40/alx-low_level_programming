#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *
 *
 * Return:0
 *
*/
int print_last_digit(int c)
{
	int last_num = c % 10;

	_putchar(last_num + '0');
	return (last_num);
}
