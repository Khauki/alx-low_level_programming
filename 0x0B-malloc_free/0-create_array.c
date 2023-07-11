#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: chat to initialize
 * Return: pointer to the array initialized
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while  (size--)
		n[size] = c;
	return (n);
}
