#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	a = b = 0;
	while (a < 10)
	{
		while (b <= 14)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			++b;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
