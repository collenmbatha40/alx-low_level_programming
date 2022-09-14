#include "main.h"
/**
 * jack_bauer -  prints out the minutes of a day
 *
 * Return:0
 *
*/
void jack_bauer(void)
{
	int _hours = 0;
	int _min = 0;
	int _hours_remainder;
	int _min_remainder;

	while(_hours <= 23)
	{
		while(_min <= 59)
		{
			_min_remainder = _min % 10;
			_hours_remainder = _hours % 10;
			_putchar(_hours / 10 + '0');
			_putchar(_hours_remainder + '0');
			_putchar(':');
			_putchar(_min / 10 + '0');
			_putchar(_min_remainder + '0');
			_min++;
			_putchar('\n');
		}
		_hours++;
		_min = 0;
	}
}
