#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - kgen
 *
 * Return: 0
*/

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum < 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2775 - sum);
	return (0);
}
