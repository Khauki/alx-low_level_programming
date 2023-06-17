#include <stdio.h>

/**
 * main - A program that prints the various types on a computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char(a);
	int(b);
	long(c);
	long long int(d);
	float(e);

	printf("Size of char: %2d byte\n", (unsigned long)sizeof(a));
	printf("Size of int: %2d byte\n", (unsigned long)sizeof(b));
	printf("Size of long: %2d byte\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %2d byte\n", (unsigned long)sizeof(d));
	printf("Size of float: %2d byte\n", (unsigned long)sizeof(e));
	return (0);
}
