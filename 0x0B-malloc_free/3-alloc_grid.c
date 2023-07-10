#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  that returns a pointer to a 2 dimensional array of integers
 * @width: get width
 * @height: get height
 * Return: NULL or pointers
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		else
		{
			for (x = 0; x < height; x++)
			{
				ptr[i][x] = 0;
			}
		}
	}
	return (ptr);
}
