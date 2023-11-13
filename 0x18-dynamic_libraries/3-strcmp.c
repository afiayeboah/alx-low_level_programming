#include "main.h"
/**
* _strcmp - Function that compares two string
* @s1: pointer to the first string
* @s2: pointer to the second string
* Return: s1[a] - s2[a]
*/
int _strcmp(char *s1, char *s2)
{
int a, b;
a = 0;
while (s1[a] == s2[a] && s1[a] != '\0')
{
a++;
}
b = s1[a] - s2[a];
return (b);
}
