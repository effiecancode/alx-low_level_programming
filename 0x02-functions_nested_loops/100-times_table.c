#include "main.h"
#include<stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
int a, b, c;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
putchar(48);
for (b = 1; b <= n; b++)
{
c = a * b;
putchar(44);
putchar(32);
if (c <= 9)
{
putchar(32);
putchar(32);
putchar(c + 48);
}
else if (c <= 99)
{
putchar(32);
putchar((c / 10) + 48);
putchar((c % 10) + 48);
}
else
{
putchar(((c / 100) % 10) + 48);
putchar(((c / 10) % 10) + 48);
putchar((c % 10) + 48);
}
}
putchar('\n');
}
}
}

