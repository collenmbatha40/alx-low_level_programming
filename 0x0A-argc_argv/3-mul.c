#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num2 = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		num2 = num2 * atoi(argv[num1]);
	}
	printf("%d\n", num2);
	return (0);
}
