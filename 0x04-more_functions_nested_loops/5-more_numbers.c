#include <stdio.h>
/**
 * main - print more number
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			printf("%02d", i);
		}
	}
	putchar('\n');
}
