#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: input of long integer
 * @index: index or position where to start at
 * Return: bit value at a given position or index
 */

int get_bit(unsigned long int n, unsigned int index)

{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
