#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Descrription: the function prints last digit
 * @n: digit from which we find the last number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int s;

	if (n < 0)
		n = -n;

	s = n % 10;

	if (s < 0)
		s = -s;

	_putchar(s + '0');
	return (s);
}
