#include "main.h"

/**
 * flip_bits - Counts the number of bits needed
 * to change from one number to another.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Return: The number of bits needed to change from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive_or = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive_or >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
