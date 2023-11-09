#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: more integers to sum
 * Return: the resulting numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int;
	va_list pri;

	va_start(pri, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(pri, int));
		else if (separator && i == 0)
			printf("%d", va_arg(pri, int));
		else
			printf("%s%d", separator, va_arg(pri, int));
	}
	va_end(pri);

	printf("\n");
}
