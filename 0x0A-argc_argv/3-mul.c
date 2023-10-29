#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multip of 2 numb
 * @argc: count of arguments
 * @argv: pointer to string
 * Return: 0 on sucess, 1 Error
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)

	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
