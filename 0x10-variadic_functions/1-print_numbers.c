#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers,
* followed by a new line
* @separator: string to be printed between numbers
* @n: The number of arguments passed to the function
* @... A variable number of arguments to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
