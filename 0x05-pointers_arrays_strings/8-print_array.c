#include "main.h"
#include <stdio.h>

/**
 * print_erray - prints n elements of an erray of integers
 * @a: array of integers
 * @n: number of elements of the erray to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
	if (j != (n - 1))
	{
		printf(" , ");
	}
	}
	printf("\n");
}
