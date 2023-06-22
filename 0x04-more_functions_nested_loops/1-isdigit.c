#include "main.h"

/**
 * _isupper - check if numbers are 0 - 9
 * @c: char to checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
