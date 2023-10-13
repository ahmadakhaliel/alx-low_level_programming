#include "main.h"

/**
 * print_line - print a st. line
 *
 * @n: is the number times the character
 *
*/
void print_line(int n)
{
	int lnChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChar = 1; lnChar <= n; lnChar++)
			_putchar('_');
		_putchar('\n');
	}
}
