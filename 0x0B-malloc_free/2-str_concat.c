#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string, else NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int indx, newindx = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (indx = 0; s1[indx] || s2[indx]; indx++)
	{
		len++;
	}
	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (indx = 0; s1[indx]; indx++)
	{
		newstr[newindx++] = s1[indx];
	}
	for (indx = 0; s2[indx]; indx++)
	{
		newstr[newindx++] = s2[indx];
	}
	return (newstr);
}
