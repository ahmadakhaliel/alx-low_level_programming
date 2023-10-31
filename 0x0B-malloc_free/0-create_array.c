#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars
 *              and initializes it with a specific char
 * @size: size of the std::array
 * @c: character to int
 * Return: pointer to the array
*/

char *create_array(unsigned int size, char c)

{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	return (0);

	while (size--)
	n[size] = c;

	return (n);
}
