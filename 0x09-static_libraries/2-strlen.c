 #include "main.h"

/**
 * _strlen - check the code
 *
 * @s: input strinh
 *
 * Return: length of
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
