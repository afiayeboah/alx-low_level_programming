#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generate a key depending on a username for crackme5.
 * @argc: Number of arguments passed.
 * @argv: Arguments passed to main.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	unsigned int i, multiplier;
	size_t len, sum;
	char *char_set =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	key[0] = char_set[(len ^ 59) & 63];

	for (i = 0, sum = 0; i < len; i++)
		sum += argv[1][i];

	key[1] = char_set[(sum ^ 79) & 63];

	for (i = 0, multiplier = 1; i < len; i++)
		multiplier *= argv[1][i];

	key[2] = char_set[(multiplier ^ 85) & 63];

	for (multiplier = argv[1][0], i = 0; i < len; i++)
		if ((char)multiplier <= argv[1][i])
			multiplier = argv[1][i];
	srand(multiplier ^ 14);
	key[3] = char_set[rand() & 63];

	for (multiplier = 0, i = 0; i < len; i++)
		multiplier += argv[1][i] * argv[1][i];
	key[4] = char_set[(multiplier ^ 239) & 63];
	for (multiplier = 0, i = 0; (char)i < argv[1][0]; i++)
		multiplier = rand();
	key[5] = char_set[(multiplier ^ 229) & 63];
	printf("%s\n", key);
	return (0);
}
