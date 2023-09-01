#include "main.h"
/**
* _puts - this function prints a string followed by a new line
* @str: pointer to the string
* Return: string and new line
*/

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
