#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashdj;
	int c;

	hashdj = 5381;
	while ((c = *str++))
		hashdj = ((hashdj << 5) + hashdj) + c; /* hashdj * 33 + c */

	return (hashdj);
}
