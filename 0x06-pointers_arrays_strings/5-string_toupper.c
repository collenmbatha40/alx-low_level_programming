#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @a:  string pointer
 * Return: string
 */
char *string_toupper(char *a)
{
	int n = 0;

	while (a[n])
	{
		if (a[n] >= 97 && a[n] <= 122)
		{
			a[n] = a[n] - 32;
		}
		n++;
	}
	return (a);
}
