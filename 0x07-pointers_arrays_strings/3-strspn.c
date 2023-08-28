#include "main.h"
/**
* _strspn - Function that gets the length of a prefix substring
* @s: string being searched
* @accept: Prefix to measure
* Return: Number of bytes in s which only consists of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
