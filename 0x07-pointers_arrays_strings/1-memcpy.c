#include "main.h"
/**
* _memcpy - Function that copies memory area
* @src: bytes where memory area is copied
* @dest: where memory area is stored
* @n: number of bytes
* Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
