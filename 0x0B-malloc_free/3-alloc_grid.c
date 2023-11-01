#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - nested loop
 * @width: width input
 * @height: height input
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **aa;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (s[i] 
