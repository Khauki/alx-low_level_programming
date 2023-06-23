#include "main.h"
#include <stdio>

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * but for mutliples of three prins Fizz insted of the number
 * and for the multiples of five prints Buzz
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i && 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == i)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}
