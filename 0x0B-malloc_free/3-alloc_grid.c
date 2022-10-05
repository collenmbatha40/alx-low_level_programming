#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer of a pointer else NULL
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		s = (int **) malloc(height * sizeof(int *));
		if (!s)
		{
			free(s);
			return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			s[a] = (int *) malloc(width * sizeof(int));
			if (!s[a])
			{
				for (b = 0; b <= a; b++)
				{
					free(s[b]);
				}
				free(s);
				return (NULL);
			}
		}
		for (c = 0; c < height; c++)
		{
			for (d = 0; d < width; d++)
			{
				s[c][d] = 0;
			}
		}
		return (s);
	}
}
