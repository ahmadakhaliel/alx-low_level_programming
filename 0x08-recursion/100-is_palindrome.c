#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - fn with variables
 * @s: pointer to string
 * @start: first string integer
 * @end: last string integer
 * Return: 1 true, 0 false
*/

int is_palindrome_recursive(char *s, int start, int end)

{

if (start >= end)

{
	return (1);
}
if (s[start] != s[end])
{
	return (0);
}

return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - fn check if string is palindrome
 * @s: string to be checked
 * Return: string
*/

int is_palindrome(char *s)
{
int length = strlen(s);
}
