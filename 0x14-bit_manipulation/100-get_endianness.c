#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if L endian, 1 if s endian
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
