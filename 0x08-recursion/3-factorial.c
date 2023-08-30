#include "main.h"

/**
* factorial - function returns the factorial of n
* @n: number to return the factorial of
* Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
