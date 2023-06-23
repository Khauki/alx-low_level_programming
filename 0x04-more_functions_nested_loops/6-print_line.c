#include "main.h"

/**
 * print_line -straight-line
 * @n: no times
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		putchar ('_');
	}
	putchar ('\n');
}
