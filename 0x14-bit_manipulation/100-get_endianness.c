#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine (little or big).
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *char_ptr = (char *)&num;

	return (*char_ptr);
}
