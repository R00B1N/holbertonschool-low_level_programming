#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function to free all the memory address by gd
 * @grid: array to free memory address
 * @height: height of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
