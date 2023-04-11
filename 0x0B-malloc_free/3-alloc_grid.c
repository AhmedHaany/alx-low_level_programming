#include "main.h"

/**
 * alloc_grid - return a pointer to a 2 dimensional arrray of integers
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * Return: NULL on failure or if width or height = 0 else return pointer
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int i, j;
	int **ans;

	ans = (int **) malloc(height * sizeof(int *));

	if (ans == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ans[i] = (int *) malloc(width * sizeof(int));
	
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ans[i][j] = 0;
	return (ans);
}
