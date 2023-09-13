#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n", arr[index]);
			break;
		}
		printf("%02hhx ", arr[index]);
	}
	return (0);
}
