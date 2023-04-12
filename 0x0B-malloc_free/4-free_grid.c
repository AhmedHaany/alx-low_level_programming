#include "main.h"

/**
 * free_grid - frees a 2d array from memory
 * @grid: 2d array to free
 * @height: height of the 2d array
 *
 * Return: void ALWAYS
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
