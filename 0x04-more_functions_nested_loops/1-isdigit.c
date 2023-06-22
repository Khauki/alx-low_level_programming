#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 1 if c is a digit and 0 if not
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
