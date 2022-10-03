#include "main.h"

/**
 * 1-memcpy.c: this copies the first n byte from memory area to dest
 *
 * @src: source of copied byte.
 * @dest: destination of copied byte.
 * @n: no of byte copied.
 *
 * Return: The area pointed to by dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i = 0;

	while ( i < n )
	{
		src[i] = dest[i];
		i++;
	}
	return(dest);
}

