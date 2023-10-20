#include "main.h"
#include <stdio.h>


int isPrintASC(int n)
{
	return (n >= 32 && n <= 126);
}

void printHex(char *b, int start, int end)
{
	int i = 0;
	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i%2)
			printf(" ");
		i++;
	}
}

void printASC (char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintASC(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print a buffer
 * @b: string
 * @size: size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)

	{
		for (start = 0; start < size; start += 10)

		{
		end = (size - start < 10) ? size - start : 10;
		printf("%08x: ", start);
		printHex(b, start, end);
		printASC(b, start, end);
		printf("\n");
		}
	}	else
	printf("\n");
}
