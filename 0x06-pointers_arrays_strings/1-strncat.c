#include "main.h"
/**
* _strncat - Function that concatenates two strings
* @dest: destination string pointer
* @src: source string pointer
* @n: number of bytes to concatenate
* Return: pointer to destination string
*/

char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
for (b = 0; b < n && src[b] != '\0'; b++, a++)
{
dest[a] = src[b];
}
dest[a] = '\0';
return (dest);
}
