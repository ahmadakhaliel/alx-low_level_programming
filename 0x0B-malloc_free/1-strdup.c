#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer
 *	to a newly allocated space in memory
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

for (; str[size] != '\0'; size++);


m = malloc((size + 1) * sizeof(char));

	if (m == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	m[i] = str[i];
	m[size] = '\0';

	return (m);
}

