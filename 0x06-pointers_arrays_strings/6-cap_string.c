#include "main.h"
#include <stdio.h>

/**
 * isLoweR - determ wether ascii is lower
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isLoweR(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * islimit - determ wether ascii is limit
 * @c: character
 * Return: 1 if true, 0 if false
*/

int islimit(char c)
{
	int i;
	char limit[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == limit[i])
			return (1);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a str
 * @s: input string
 * Return: string with capital letters
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundlimit = 1;

	while (*s)
	{
		if (islimit(*s))
			foundlimit = 1;
		else if (isLoweR(*s) && foundlimit)
		{
			*s -= 32;
			foundlimit = 0;
		}
		else
			foundlimit = 0;
		s++;
	}
	return (ptr);
}
