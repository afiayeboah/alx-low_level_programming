#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates n bytes
 * of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
	n = len2;
		s = malloc(sizeof(char) * (len1 + n + 1));

	if (!s)
		return (NULL);

	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}

while (b < n)
{
s[a] = s2[b];
a++;
b++;
}

	s[a] = '\0';

	return (s);

}
