#include "main.h"
#include <stdio.h>

/**
*  * print_diagsums - prints the sum of the two diagonals of a square matrix of
*   * integrers
*    * @a: matrix of integrers
*     * @size: size of the square
**/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int len;

	sum1 = sum2 = 0;
	len = (size * size);
	for (i = 0; i < (size * size); i++)
	{
	if (i % (size - 1) == 0 && i < len - 1 && i > 0)
	sum2 += *(a + i)
	if (i % (size + 1) == 0 || i == 0)
	sum1 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
