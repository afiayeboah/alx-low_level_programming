#include "main.h"

/**
 * set_bit - Sets a specified bit to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set (0-based).
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
