#include "main.h"

/**
 * print_square - prints a square
 * @n: the number of # to print in each line
 */

void print_square(int n)
{
	int e, f;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			for (f = 0; f < n; f++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

