#include "main.h"

/**
 * _sqrt_recursion - find nat squ root
 * @n: int
 * @va: sq root
 * Return: int
*/

int square(int n, int va);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds sq root
 * @n: int
 * @va: sq root
 * Return: int
*/

int square(int n, int va)
{
	if (va * va == n)
		return (va);
	else if (va * va < n)
		return (square(n, va + 1));

	else
		return (-1);
}
