#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid
 * @height: height mension of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (i ; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
