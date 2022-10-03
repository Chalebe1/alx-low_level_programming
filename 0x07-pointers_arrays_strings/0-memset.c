#include "main.h"

/**
 * _memset - it fills the firs n bytes of the memory with a constant byte 
 *
 * @s: the pointer whose bytes are to be filled
 * @b: the byte used to replace n bytes of s
 * @n: number of bytes to be repalaced
 *
 * Return: The areaa pointed to by s. 
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0; 
	
	while(i<n)
	{
		s[i] = b;
		i++;
	}
	return(s);
}
