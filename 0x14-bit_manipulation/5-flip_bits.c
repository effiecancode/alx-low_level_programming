#include "main.h"

/**
 * flip_bits - returns the total count of bits you would
 * need to flip values
 * @n: value 1
 * @m: value 2
 * Return: total count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int countbits;

	for (countbits = 0; n || m; n >>= 1, m >>= 1)
	{
	if ((n & 1) != (m & 1))
	countbits++;
	}
	return (countbits);
}
