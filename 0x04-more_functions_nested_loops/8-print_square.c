#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: size of the square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int row, coloumn;

	for (row = 1; row <= size; row++)
	{
		for (coloumn = 1; coloumn <= size; coloumn++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
