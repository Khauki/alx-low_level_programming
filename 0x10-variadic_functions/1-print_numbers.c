#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: the string to separate
 * @n: the number of integers
 * @...: a variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
