#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints wether n it is greater than 5, less than 6 or 0
 *
 * Return: 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n > %) > 5)
	{
		printf(" last digit of %d is %d is greater than 5\n",
				n . n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf(("last digit of %d is %d and less than 6 and not 0\n"
					n . n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n",
				n . n % 10);
	}
	return (0);
}
