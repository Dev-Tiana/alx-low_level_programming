#include "main.h"
/**
 * _strlen : return string lenght
 * @s: check
 * Description: this program will return the lenght of a string
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
