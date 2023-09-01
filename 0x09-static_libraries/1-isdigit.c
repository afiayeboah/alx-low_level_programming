#include "main.h"

/**
* _isdigit -  Function that checks for a digit (0 through 9)
* @c: int to be checked
* Return: 1 if c is a digit, otherwise 0
*/
int _isdigit(int c)
	{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
