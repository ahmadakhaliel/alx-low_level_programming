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
	if (size == 0)
	{
		return (NULL);
	}

	char *char_array = (char *) malloc(size * sizeof(char));

	if (char_array == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		char_array[i] = c;
	}

	return (char_array);
}

/**
 * main - main function
 * Return: -
*/

int main(void)

{
	unsigned int size = 5;
	char c = 'H';

	char *my_array = create_array(size, c);

	if (my_array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			printf("%c ", my_array[i]);
		}
		printf("\n");

		free(my_array);
	}

	return (0);
}
