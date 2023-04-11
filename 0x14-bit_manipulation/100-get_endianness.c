#include "main.h"

/**
 * get_endianness - get small or big endian
 * Return: 0 for big endian, 1 for small endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

return (*c);
}
