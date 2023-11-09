#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * @...: more integers to sum
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list Summation;

	va_start(Summation, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(Summation, int);
	va_end(Summation);
	return (sum);
}
