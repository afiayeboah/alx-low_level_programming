#include "main.h"
/**
* swap_int - Swaps the value of two integers
* @a: swaps and stores the address of b
* @b: swaps and stores the address of a
* Return: 0 (Success)
*/
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
