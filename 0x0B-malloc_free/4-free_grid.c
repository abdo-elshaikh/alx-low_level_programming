#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a  dimensional grid previously created
 * @grid: poiner for array
 * @height: intger height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
