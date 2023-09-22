#include "lists.h"
void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - prints a sentence before the main
 * function is executed
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! And yet, you must allow,\n");
	printf("I bear my house upon my back!\n");
}
