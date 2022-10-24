#include "main.h"
/**
 * int _strlen(char *s);
 * @s: check
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
