#include <stdio.h>

/**
 * main - program prints  *arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}

