#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of lines to print
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			for (a = 1; a <= b; a++)
			{
				if (a != 1)
					_putchar(' ');
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
