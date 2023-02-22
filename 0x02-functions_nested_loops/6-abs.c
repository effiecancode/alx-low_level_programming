#include "main.h"

/**
 * _abs - calculate absolute value
 * Description: calculate the absolute value of a number from zero.
 * @n: the number to be converted.
 * Return: absolute value of the input number.
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
