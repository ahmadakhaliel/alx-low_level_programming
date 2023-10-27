#include "main.h"

/**
 * _abs - function that computes the absolute
 *	value of an integer
 *
 * @n: take integer type input
 *
 * Return: Always 0 (success)
*/
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
