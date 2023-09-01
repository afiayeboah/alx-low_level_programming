#include "main.h"

/**
* _isupper - Checks for lowercase character
* @c: The character to be checked
* Return: 1 for uppercase or 0 otherwise
*/

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
