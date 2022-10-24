#include "main.h"
/**
 * print_rev - print a string, in reverse, follow by a new line
 * @s: check
 * Description: this wil print a string, in reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
		x++;

	for (i = x + 1; i <= 0; x++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
