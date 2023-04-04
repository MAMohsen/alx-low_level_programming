#include <stdlib.h>
#include "main.h"
/**
 *_strch - returns first occurence of character c in a string s.
 *@s: the string to check.
 *@c: the character to look for
 *Return: the pointer to the location of the first occurence of the character c in string s.
 *Return: NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
