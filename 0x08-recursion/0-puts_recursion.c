#include "main.h"

/**
 * _puts_recursion - prints a string recursively, followed by a new line.
 * @s: the string to be printed
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if(*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    _putchar('\n');
    return;
}