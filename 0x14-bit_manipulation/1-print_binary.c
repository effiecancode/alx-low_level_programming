#include "main.h"
#include <stdio.h>

/**
 * print_binary -  to print the binary representation of a number
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
			
		_putchar((n & 1) ? '1' : '0');
	}
}
