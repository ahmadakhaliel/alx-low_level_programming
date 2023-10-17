 #include "main.h"

/**
 * _puts - check the code
 *
 * @str: string paramter
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putcahr('\n');
}
