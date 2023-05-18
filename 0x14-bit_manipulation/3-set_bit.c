#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index or position
 * @n: pointer of a number
 * @index: position of the bit to set
 *
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int e;

	if (index > 63)
	return (-1);
	e = 1 << index;
	*n = (*n | e);
	return (1);
}
