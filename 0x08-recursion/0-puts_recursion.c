#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 * Return: On success 1, on error -1.
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The input string.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}
