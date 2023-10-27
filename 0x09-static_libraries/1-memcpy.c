#include "main.h"

/**
 * *_memcpy - fn
 * @dest: pointer to constant
 * @src: const
 * @n: bytes to use
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
