#include "main.h"

/**
 * binary_to_uint - function that converts a binary to unsigned int
 * @b: pointer to a string holding 0 to 1 values
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b  != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b++  - '0');

	}
	return (result);
}
