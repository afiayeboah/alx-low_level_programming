#include "main.h"
/**
* _memset - Function that fill a block of memory with a specific value
* @s: pointer to starting address of memory to be filled
* @b: the desired value to fill memory with
* @n: number of bytes to be filled
* Return: Pointer to memory area ‘s’ with ‘n’ bytes filled with ‘b’
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
