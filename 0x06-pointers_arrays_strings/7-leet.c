#include "main.h"

/**
 * leet - encode into 1137speak
 * @str: input value
 * Return: str value
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "aAeEoOtTlT";
	char s2[] = "4433007711";

		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (str[i] == s1[j])
				{
					str[i] = s2[j];
				}
			}
		}
	return (str);
}
