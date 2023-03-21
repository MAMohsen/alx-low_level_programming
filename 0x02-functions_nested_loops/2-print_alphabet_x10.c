#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * 
 * Return: 10x a-z
 */
void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int n= 'a'; n<= 'z'; n++)
        {
            _putchar(n);
        }
        _putchar ('\n');
    }
}
