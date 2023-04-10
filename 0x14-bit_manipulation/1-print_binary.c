#include "main.h"
#include <stdio.h>

/**
 * print_binary -  to print the binary representation of a number
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	int i, bitsPrinted;

	if (n == 0)
		_putchar('0');

	for (bitsPrinted = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			bitsPrinted = 1;
		if (bitsPrinted == 1)
		((n >> 1) & 1) ? _putchar('1') : _putchar('0');
	}
}
