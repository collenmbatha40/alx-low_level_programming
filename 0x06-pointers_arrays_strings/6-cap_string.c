#include "main.h"
/**
 * cap_string - capitalizes a string
 * @a: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	char special[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int length = 13;
	int index = 0;
	int n;

	while (a[index])
	{
		n = 0;
		while (n < length)
		{
			if ((index == 0 || a[index - 1] == special[n]) && (a[index] >= 97 && a[index] <= 122))
			{
				a[index] = a[index] - 32;
				n++;
			}
		}
		index++;
	}
	return (a);
}
