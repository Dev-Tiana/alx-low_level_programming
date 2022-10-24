#include "main.h"
/**
 * _puts - print a string and a new line
 * @str: check
 * Description: this will print a string follow by a new line
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
