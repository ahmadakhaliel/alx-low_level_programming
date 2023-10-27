#include "main.h"

/**
 * _memset - fn
 * @s: pointer to constant
 * @b: const
 * @n: bytes to use
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
