#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 * Return: the integer converted from the string, otherwise 0
 */
int _atoi(char *s)
{
	int a, b, n, len, c, digit;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	c = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}

	if (c == 0)
		return (0);

	return (n);
}

/**
 * main - program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
