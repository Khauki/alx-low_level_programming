#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(size(int *) *height);

	if (mee == NULL)
	return (NULL);
		
	for (x = 0; x < height, x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (:
