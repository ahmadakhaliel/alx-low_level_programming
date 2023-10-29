#include <stdio.h>

/**
 * main - program prints number of
 * arguments passed into it
 * @argc: number of arguments passed
 * @argv: pointer to an array
 * Return: 0 success, other fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
