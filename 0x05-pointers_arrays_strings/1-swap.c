 #include "main.h"

/**
 * swap_int - check the code
 *
 * @a: input para1
 * @b: input para2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
