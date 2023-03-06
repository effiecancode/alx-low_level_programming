#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	c = d = 0;
	while (c < 8)
	{
		d = 0;
		while (d < 8)
		{
			_putchar(a[c][d]);
			d++;
		}
		_putchar('\n');
		c++;
	}
}

