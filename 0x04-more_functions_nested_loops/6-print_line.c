#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of underscores to print
 * Return: void
 */
void print_line(int n)
{
	int k;

	if (n > 0)
		for (k = 0; k < n; k++)
			_putchar('_');
	_putchar('\n');
}
