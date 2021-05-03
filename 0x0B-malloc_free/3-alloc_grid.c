#include "holberton.h"
#include <stdlib.h>
/**
 * *alloc_grid - function to alloc a grid coded by gd
 * @width: width of the grid
 * @height: height of the grid
 * Return: the grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(sizeof(int *) * height);
	if (grid == '\0')
		return (0);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == '\0')
		{
			free(grid);
			for (b = 0; b <= a; b++)
				free(grid[b]);
			return (0);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
