#include <stdio.h>

/**
 * main - program prints  *arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char  *argv[] __attribute__((unused)))
{
	for (int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

