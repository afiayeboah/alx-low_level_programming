#include "main.h"
/**
* print_times_table - Prints n times table, starting with 0
* @n: number of times table
*/
void print_times_table(int n)
{
int a, b, c;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = b * a;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (c < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (c < 100)
{
_putchar(' ');
}
}
if (c < 10)
{
_putchar ('0' + c);
}
else if (c < 100)
{
_putchar('0' + c / 10);
_putchar('0' + c % 10);
}
else
{
_putchar('0' + c / 10);
_putchar('0' + (c / 10) % 10);
_putchar('0' + c % 10);
}
}
_putchar('\n');
}
}
}
