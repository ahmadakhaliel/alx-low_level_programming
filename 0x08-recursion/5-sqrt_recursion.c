#include "main.h"

/**
 *  _sqrt_recursion_h - helping function
 *  @n: integer
 *  @start: integer
 *  @end: integer
 *  Return: -
*/

int _sqrt_recursion_h(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}

	else if (square > n)
	{
		return (_sqrt_recursion_h(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_h(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - fun return natural sq.root of number
 * @n: number
 * Return: -
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_h(n, 0, n));
}

