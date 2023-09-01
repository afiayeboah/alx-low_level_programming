#include "main.h"
/**
* *_strcpy - Copies the string pointed to by src
* to the buffer pointed to by dest
* @dest: char type string
* @src: char type string
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int a = -1;
do {
a++;
dest[a] = src[a];
} while (src[a] != '\0');
return (dest);
}
