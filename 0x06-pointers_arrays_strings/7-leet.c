#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: char
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char b[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[j] == s[i])
				s[i] = d[j];
		}
	}
	return (s);
}
