#include <stdio.h>
/**
 * main - prints sum
 * Description: computes and print sum of mulitiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int c, res;

	for (c = 0; c < 1024; c++)
		if (c % 3 == 0 || c % 5 == 0)
			res += c;
	printf("%d\n", res);
	return (0);
}
