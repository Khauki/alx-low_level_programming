#include "main.h"

/**
 * leet - encode into 1137speak
 * @s: input value
 * Return: s value
 */
char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlT";
	char s2[] = "4433007711";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (s[i] == s1[j])
				{
					s[i] = s2[j];
				}
			}
		}
	return (s);
}
