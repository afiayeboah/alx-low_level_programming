#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of the two integers
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - Divides two integers
 * @a: Numerator
 * @b: Denominator
 *
 * Return: Result of the division
 */
int div(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of the division
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}
