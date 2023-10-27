#include "main.h"

/**
 * _isdigit - chech if c is digit
 *
 * @c: input for digits
 *
 * Return: 1 if it is digit, 0 if not digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
