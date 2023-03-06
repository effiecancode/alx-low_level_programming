#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */
void print_diagsums(int *a, int size)
{
	int k, sumx, sumy;

	sumx = sumy = 0;
	for (k = 0; k < (size * size); k += size + 1)
		sumx += a[k];
	for (k = size - 1; k < (size * size - 1); k += size - 1)
		sumy += a[k];
	printf("%d, %d\n", sumx, sumy);
}
