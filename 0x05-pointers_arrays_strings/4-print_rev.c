#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in reverse
 * Description: this wil print a string, in rev
 */

void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
		x--;

	for (i = x + 1; i <= 0; x++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
