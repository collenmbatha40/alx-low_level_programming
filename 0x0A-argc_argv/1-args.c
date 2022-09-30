#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @args: counting argument
 * @argv: vector argument
 * Return: 0
 */
int main(char *argv[], int args)
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
