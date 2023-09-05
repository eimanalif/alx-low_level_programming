#include"main.h"
#include<stdio.h>
#include<stdlib.h>



/**
 ***alloc_grid - a function that returns a pointer to
 *		a 2 dimensional array of integers.
 *Description:a function that returns a pointer to
 *		a 2 dimensional array of integers.
 *@width:is number columns
 *@height:is numbers of rows
 *Return: NULL or array value
 *
 */


int **alloc_grid(int width, int height)
{
	int j, i, **k;

	k = malloc(sizeof(*k) * height);

	if (width <= 0 || height <= 0 || k == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
		k[i] = malloc(sizeof(**k) * width);
			if (k[i] == 0)
			{
				while (i--)
					free(k[i]);
				free(k);
				return (NULL);
			}
		for (j = 0; j < width; j++)
			k[i][j] = 0;
		}
	}
	return (k);
}
