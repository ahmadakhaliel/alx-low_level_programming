#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: the number of itmes the char should
 *	be printed
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; post++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
