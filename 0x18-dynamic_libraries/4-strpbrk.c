#include "main.h"
/**
* _strpbrk - Function that searches a string for any of a set of bytes
* @s: String being searched
* @accept: Set of bytes being searched for
* Return: If set is matched - a pointer to matched byte.
* else - NULLL.
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
