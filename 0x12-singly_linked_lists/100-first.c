#include "lists.h"
void _comesfirstbyAYA(void) __attribute__ ((constructor));

/**
 * _comesfirstbyAYA - prints a sentence before the main
 * function is executed
 * Return: void
 */
void _comesfirstbyAYA(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
