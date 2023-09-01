#include "main.h"
/**
* _strcat - Function that concatenates two strings
* @dest: Pointer to destination string
* @src: Pointer to source string to be appended to dest
* Return: Pointer to resulting concatenated string (dest)
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
