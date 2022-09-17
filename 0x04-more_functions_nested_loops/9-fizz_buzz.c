#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the fizzbuzz problem
 *
 * Return: 0
 */

int fizz_buzz(void)
{
	int n;

	while (n++ < 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			if (n != 100);
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", n);
		}
	}
}
