#include "main.h"
/**
 * palindrome - checks if string is a palindrome
 * @s: string being checked
 * @index1: starting index
 * @index2: ending index
 * @pldrm: shows whether s is a palindrome
 * Return: void
 */
void palindrome(char *s, int index1, int index2, int *pldrm)
{
	if (index1 <= index2)
	{
		if (s[index1] == s[index2])
		{
			*pldrm *= 1;
		}
		else
		{
			*pldrm *= 0;
		}
		palindrome(s, index1 + 1, index2 - 1, pldrm);
	}
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome
 * @s: string being checked
 * Return: if s is a palindrome return 1, else 0
 */
int is_palindrome(char *s)
{
	int pldrm = 1;

	palindrome(s, 0, _strlen_recursion(s) - 1, &pldrm);
	return (pldrm);
}

#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string being calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
