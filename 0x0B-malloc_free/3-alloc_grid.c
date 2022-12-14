#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{

	int **iarray;
	int i, n;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	iarray = malloc(sizeof(int *) * height);
	if (iarray == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray[i] == 0)
		{
			for (n = 0; n < i; n++)
				free(iarray[n]);
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
			iarray[i][n] = 0;
	}
	return (iarray);
}
