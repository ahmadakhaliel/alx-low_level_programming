#include "main.h"
#include <stdio.h>

/**
 * is_prime_recursive - func
 * @n: integer
 * @divi: integer
 * Return: -
*/

int is_prime_recursive(int n, int divi)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divi == 1)
	{
		return (1);
	}
	else if (n % divi == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, divi - 1));
	}
}

/**
 * is_prime - function to check
 * @n: integer
 * Return: -
*/
int is_prime(int n)
{
	int divi = n - 1;

	return (is_prime_recursive(n, divi));

}
