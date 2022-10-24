#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s: check
 * Description: this will return the lenght of a string
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
