#include "main.h"
/**
* _strchr - Function that locates a char in a string
* @s: The string to be searched
* @c: The character to be located
* Return: If c is found - a pointer to the first occurence.
* else - Null.
*/

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
