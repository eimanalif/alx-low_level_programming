#include"main.h"
#include<stdio.h>
#include<stdlib.h>


/**
 *free_grid - a function that frees a 2 dimensional grid
 *		previously created by your alloc_grid function.
 *Description:a function that frees a 2 dimensional grid
 *		previously created by your alloc_grid function.
 *
 *@grid:an array
 *@height:number of rows
 *
 *Return:0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
