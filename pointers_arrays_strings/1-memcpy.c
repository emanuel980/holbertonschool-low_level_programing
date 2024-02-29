#include "main.h"
/**
 *_memcpy - fills memory with constant type
 *@dest:receiving var
 *@src: source var
 *@n: number of bytes
 *Return: updated array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
return (dest);
}
