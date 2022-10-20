#include <stdio.h>
/**
 * hare - function executed before main
 * Return: void
 */
void __attribute__((constructor)) hare()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
