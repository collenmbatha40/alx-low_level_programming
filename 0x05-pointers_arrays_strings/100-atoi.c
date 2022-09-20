#include "main.h"
/**
 * _atoi - converts string to in
 * @s: string to be converted
 * Return: new integer
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	do {
			if (*s == "-")
			{
				sign += -1;
			}
			else if (*s >= "0" && *s <= "9")
			{
				number = number * 10 + (*s - "0")
			}
			else if (number > 0)
			{
				break;
			}
	}while (*s++);

	return (number + sign);
}
