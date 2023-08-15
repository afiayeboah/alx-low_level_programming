include "main.h"
/**
* _abs - Computes the absolute value of an integer
* @n: The int to check
* Return: The absolute value of int
*/
int _abs(int n)
{       
if (n >= 0)
{           
return (n);  // Return the value itself when n is non-negative
}
else
{
return (-n); // Return the negation when n is negative
}
}
