#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string being checked
 * @accept: string to check from
 * Return: pointer to s or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m = 0;
	unsigned int n = 0;

	for (s[m]; m++)
	{
		for (accept[n]; n++)
		{
			if (s[m] == accept[n])
			{
				break;
			}
		}
		if (accept[n])
		{
			return (s + m);
		}
	}
	return (0);
}
