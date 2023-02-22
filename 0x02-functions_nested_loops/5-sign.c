#include "main.h"

/**
 * print_sign - determines whether is + - or 0
 * Description: prints zero, negative or positive
 * @n: the number to he checked
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else
	{
		_putchar('/');
		return ('/');
	}
}
