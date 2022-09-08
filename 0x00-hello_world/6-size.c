#include <stdio.h>
/**
 * main-prints the outcome of the printf function
 *
 * Description: using the main function
 * this program prints the size of various data types and their sizes
 * Return:0
*/
int main(void)
{
	char c;
	int i;
	long long_i;
	long long long_long_i;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d bytes\n", sizeof(long_i));
	printf("Size of a long long int: %d bytes\n", sizeof(long_long_i));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return(0)
}
