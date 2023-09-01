 #include "main.h"
/**
* _strstr - Function that locates a substring
* @haystack: Strign to search
* @needle: Substring to locate
* Return: if substring is located - a pointer to the start
* of located string
* else - NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
