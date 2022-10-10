#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int indx1 = 0, indx2 = 0, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2"";
	}
	while (s1[indx1] != '\0')
	{
		indx1++;
	}
	while (s2[indx2] != '\0')
	{
		indx2++
	}
	if (n > indx2)
	{
		n = indx2;
		p = malloc((size1 + n + 1) * sizeof(char));
	}
	if (p == NULL)
	{
		return (0);
	}
	for (m = 0; m < indx1; m++)
	{
		p[m] = s1[m];
	}
	for (; m < (indx1 + n); m++)
	{
		p[m] = s2[m - indx1];
	}
	p[m] = '\0';
	return (p);
}
