#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: contains copy of the string given as a parameter
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + i));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
