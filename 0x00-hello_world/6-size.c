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

	printf("Size of char: %i byte\n", (unsigned long)sizeof(a));
	printf("Size of int: %i byte\n", (unsigned long)sizeof(b));
	printf("Size of long: %i byte\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %i byte\n", (unsigned long)sizeof(d));
	printf("Size of float: %i byte\n", (unsigned long)sizeof(e));
	return (0);
}
