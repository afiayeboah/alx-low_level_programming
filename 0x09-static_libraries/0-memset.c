#include "main.h"

/**
*  _memset - Function that fills memory with a constant byte
*  @s: The memory area that needs to be filled
*  @b: The byte value that would be copied to the memory area
*  @n: number of bytes to copy the value b
*  Return: Pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
