#include "main.h"
/**
* reverse_array - Function that reverse the content of an array of integers
* @a: pointer of array
* @n: number of elements of an array
* Return: void
*/
void reverse_array(int *a, int n)
{
int t, i;
n = n - 1;
i = 0;
while (i <= n)
{
t = a[i];
a[i] = a[n];
a[n--] = t;
i++;
}
}
