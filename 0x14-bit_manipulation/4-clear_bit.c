#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given position
 * @n: pointer to a num
 * @index: position of the bit.
 * Return: 1 if successful, -1 if fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int e;

	if (index > 63)
	return (-1);
	e = 1 << index;
	if (*n & e)
	*n ^= e;
	return (1);
}
