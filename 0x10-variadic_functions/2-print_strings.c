#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: more integers to be printed
 * Return: the resulting numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list apix;

	va_start(apix, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(apix, char*);
		if (!str)
			str = "(nil)";

		if (!separator)
			printf("%s", str);

		else if (separator && i == 0)
			printf("%s", str);

		else
			printf("%s%s", separator, str);
	}
	va_end(apix);

	printf("\n");
}
