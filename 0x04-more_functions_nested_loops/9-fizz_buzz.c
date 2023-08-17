#include "main.h"
#include <stdio.h>

/**
* main - entry point
* description: prints the numbers 1 - 100 n/
* Fizz for multiples of 3, Buzz for multiples of 5.
* FizzBuzz for both multiples
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 15 == 0)
printf("FizzBuzz");
else if (a % 3 == 0)
printf("Fizz");
else if (a % 5 == 0)
printf("Buzz");
else
printf("%d", a);
if (a < 100)
printf(" ");
}
printf("\n");
return (0);
}
