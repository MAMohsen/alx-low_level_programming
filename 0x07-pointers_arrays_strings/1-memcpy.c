#include "main.h"
/**
 * _memcpy - copies memory data from src to dest.
 * @dest: destination memory area (memory area where to copy to).
 * @src: source memory area (the memory area to copy from).
 * @n: the number of bytes to be copied.
 * Return: the pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	usigned int i;

	for (i = 0; i < n ; i++)
		*(dest+i) = *(src+i);
	
	return(dest);
}
