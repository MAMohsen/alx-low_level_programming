#include "main.h"
#include <stdlib.h>
/**
 *_strch - returns first occurence of character c in a string s.
 *@s: the string to check.
 *@c: the character to look for
 *Return: the pointer to the location of the first occurence of the character c in string s.
 *Return: NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
